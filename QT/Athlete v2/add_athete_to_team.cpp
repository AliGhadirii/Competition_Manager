#include "add_athete_to_team.h"
#include "ui_add_athete_to_team.h"
#include<QMessageBox>
#include<string>
#include <vector>
#include"tournament.h"
#include"organizer.h"
#include"supervisor.h"
#include"match.h"
#include"team.h"
#include"athlete.h"
#include"match.h"
#include"datetime.h"
#include"login.h"

add_athete_to_team::add_athete_to_team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_athete_to_team)
{
    ui->setupUi(this);
}

add_athete_to_team::~add_athete_to_team()
{
    delete ui;
}

void add_athete_to_team::on_add_button_clicked()
{
    char teamAvailable =0;
    char athleteAvailable =0;


    // check for availability of team and athlete
    // for team search in team supervizor is in and is the super
    //for athlete check in the athlete vector of organaizer
    std::string athleteName = ui->athlete_name_input->text().toStdString();
    std::string teamName = ui->team_name_input->text().toStdString();
    QString teamMode = ui->team_mode_input->currentText();


    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;


    //checking team and athlete and adding athlete

    if(teamMode == "Football")
    {
        auto _athlete = f.show_athletes().begin();
        for (;_athlete != f.show_athletes().end();_athlete++)
        {
            if(_athlete->show_name() == athleteName)
            {
                athleteAvailable = 1;
                break;
            }
        }

        for(auto _team =f.show_teams().begin();_team!= f.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {

                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    if(athleteAvailable)
                    {
                        _team->show_athletes().push_back(*_athlete);
                        break;
                    }
                }
            }
        }
    }
    else if(teamName == "PingPong")
    {
        auto _athlete = p.show_athletes().begin();
        for (;_athlete != p.show_athletes().end();_athlete++)
        {
            if(_athlete->show_name() == athleteName)
            {
                athleteAvailable = 1;
                break;
            }
        }

        for(auto _team =p.show_teams().begin();_team!= p.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {

                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    if(athleteAvailable)
                    {
                        _team->show_athletes().push_back(*_athlete);
                        break;
                    }
                }
            }
        }
    }
    else if(teamName == "Badminton")
    {
        auto _athlete = b.show_athletes().begin();
        for (;_athlete != b.show_athletes().end();_athlete++)
        {
            if(_athlete->show_name() == athleteName)
            {
                athleteAvailable = 1;
                break;
            }
        }

        for(auto _team =b.show_teams().begin();_team!= b.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {

                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    if(athleteAvailable)
                    {
                        _team->show_athletes().push_back(*_athlete);
                        break;
                    }
                }
            }
        }
    }




    if(teamAvailable & athleteAvailable)
    {
        QMessageBox::information(this,"success","Athelete added successfully");
        this->close();
    }
    else if(!teamAvailable)
    {
        QMessageBox::information(this,"Error","The team is not available\t\nOr you are not the supervizor\t");
        ui->athlete_name_input->clear();
        ui->team_name_input->clear();
    }
    else if(!athleteAvailable)
    {
        QMessageBox::information(this,"Error","Athlete is not available ");
        ui->athlete_name_input->clear();
        ui->team_name_input->clear();
    }
    teamAvailable = 0;
    athleteAvailable = 0;
}
