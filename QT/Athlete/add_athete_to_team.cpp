#include "add_athete_to_team.h"
#include "ui_add_athete_to_team.h"
#include<QMessageBox>
#include<string>

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

    team * theTeam;
    athlete * theAthlete ;

    // check for availability of team and athlete
    // for team search in team supervizor is in and is the super
    //for athlete check in the athlete vector of organaizer
    std::string athleteName = ui->athlete_name_input->text().toStdString();
    std::string teamName = ui->team_name_input->text().toStdString();

    //checking team
    vector<team>::iterator startT = LoggedAthlete::logedAthlete->show_teams().begin() ;
    vector<team>::iterator endT = LoggedAthlete::logedAthlete->show_teams().end();

    for(vector<team>::iterator _team =startT;_team!=endT;_team++)
    {
        if( _team->show_name() == teamName )
        {

            if(_team->show_suoer().show_name() == LoggedAthlete::logedAthlete->show_name())
            {
                teamAvailable =1;
                *theTeam = *_team;
                break;
            }
        }
    }

    //checking athlete
    if(LoggedAthlete::logedAthlete->show_mode() == football)
    {
        vector<athlete>::iterator startA = Organizers::organizer1->show_athletes().begin();
        vector<athlete>::iterator endA = Organizers::organizer1->show_athletes().end();
        for(vector<athlete>::iterator _athlete =startA ;_athlete != endA;_athlete++)
        {
            if(athleteName == _athlete->show_name())
            {
                athleteAvailable =1;
                *theAthlete = *_athlete;
                break;
            }
        }

    }
    else if(LoggedAthlete::logedAthlete->show_mode() == pingpong)
    {
        vector<athlete>::iterator startA = Organizers::organizer2->show_athletes().begin();
        vector<athlete>::iterator endA = Organizers::organizer2->show_athletes().end();
        for(vector<athlete>::iterator _athlete =startA ;_athlete != endA;_athlete++)
        {
            if(athleteName == _athlete->show_name())
            {
                athleteAvailable =1;
                break;
            }
        }
    }
    else if(LoggedAthlete::logedAthlete->show_mode() == badminton)
    {
        vector<athlete>::iterator startA = Organizers::organizer3->show_athletes().begin();
        vector<athlete>::iterator endA = Organizers::organizer3->show_athletes().end();
        for(vector<athlete>::iterator _athlete =startA ;_athlete != endA;_athlete++)
        {
            if(athleteName == _athlete->show_name())
            {
                athleteAvailable =1;
                break;
            }
        }
    }





    //end of checking

    if(teamAvailable & athleteAvailable)
    {
        //add athlete to team
        //by searching team and athelete


        LoggedSuper::logedSuper->insert_athlete_to_team(*theTeam, *theAthlete);


        //end of adding
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
}
