#include "delete_thlete_from_team_page.h"
#include "ui_delete_thlete_from_team_page.h"
#include<QMessageBox>

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
    team * theTeam;
    athlete * theAthlete ;

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

    vector<athlete>::iterator startA = theTeam->show_athletes().begin();
    vector<athlete>::iterator endA = theTeam->show_athletes().end();

    for(vector<athlete>::iterator _athlete = startA;_athlete != endA;_athlete++)
    {
        if(_athlete->show_name() == athleteName)
        {
            athleteAvailable =1;
            *theAthlete = *_athlete;
            break;
        }
    }


    //end of checking
    if(teamAvailable & athleteAvailable)
    {
        //remove athlete from team
        //by searching team and athelete

        LoggedSuper::logedSuper->delete_athlete_from_team(*theTeam,*theAthlete);


        //end of removing
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
