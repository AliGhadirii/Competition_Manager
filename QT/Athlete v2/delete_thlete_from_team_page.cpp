#include "delete_thlete_from_team_page.h"
#include "ui_delete_thlete_from_team_page.h"
#include<QMessageBox>
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

delete_thlete_from_team_page::delete_thlete_from_team_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_thlete_from_team_page)
{
    ui->setupUi(this);
}

delete_thlete_from_team_page::~delete_thlete_from_team_page()
{
    delete ui;
}

void delete_thlete_from_team_page::on_remove_button_clicked()
{
    char teamAvailable =0;
    char athleteAvailable =0;
    // check for availability of team and athlete
    // for team search in teams of supervizor is in and is the super
    //for athlete check in team

    std::string athleteName = ui->athlete_name_input->text().toStdString();
    std::string teamName = ui->team_name_input->text().toStdString();
    QString teamMode = ui->team_mode_input->currentText();

    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    if(teamMode == "Football")
    {
        for(auto _team = f.show_teams().begin() ;_team != f.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {
                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                    {
                        if(_athlete->show_name() == athleteName)
                        {
                            _team->show_athletes().erase(_athlete);
                            athleteAvailable =1;
                            break;
                        }
                    }
                }
            }
        }
    }
    else if(teamMode == "PingPong")
    {
        for(auto _team = p.show_teams().begin() ;_team != p.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {
                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                    {
                        if(_athlete->show_name() == athleteName)
                        {
                            _team->show_athletes().erase(_athlete);
                            athleteAvailable =1;
                            break;
                        }
                    }
                }
            }
        }
    }
    else if(teamMode == "Badminton")
    {
        for(auto _team = b.show_teams().begin() ;_team != b.show_teams().end();_team++)
        {
            if( _team->show_name() == teamName )
            {
                if(_team->show_super().show_name() == _loggedAthlete->show_name())
                {
                    teamAvailable =1;
                    for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                    {
                        if(_athlete->show_name() == athleteName)
                        {
                            _team->show_athletes().erase(_athlete);
                            athleteAvailable =1;
                            break;
                        }
                    }
                }
            }
        }
    }

    //end of removing

    if(athleteAvailable && teamAvailable)
    {
        QMessageBox::information(this,"success","Athelete removed successfully");
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
        QMessageBox::information(this,"Error","Athlete is not in the team\t");
        ui->athlete_name_input->clear();
        ui->team_name_input->clear();
    }
}
