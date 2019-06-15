#include "athlete.h"
#include "ui_athlete.h"
#include "making_team_page.h"
#include "edit_personal_info.h"
#include "supervizor_page.h"
#include "show_infos_page.h"
#include<QMessageBox>

Athlete::Athlete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Athlete)
{
    ui->setupUi(this);
}

Athlete::~Athlete()
{
    delete ui;
}

void Athlete::on_make_team_clicked()
{
    making_team_page MTpage;
    MTpage.exec();
}

void Athlete::on_edit_self_info_clicked()
{
    edit_personal_info editPage;
    editPage.exec();
}

void Athlete::on_Supervizor_option_clicked()
{
    //check if athlete is supervizor or not
    char isOK =0;

    std::string currentName = LoggedAthlete::logedAthlete->show_login().show_username();
    if(LoggedAthlete::logedAthlete->show_mode() == football)
    {
        vector <supervisor>::iterator startS = Organizers::organizer1->show_supervisors().begin();
        vector <supervisor>::iterator endS = Organizers::organizer1->show_supervisors().end();
        for(vector <supervisor>::iterator i = startS;i!=endS;i++)
        {
            std::string name = i->show_login().show_username;
            if(currentName == name)
            {
                isOK =1;
                LoggedSuper::setlogedSuper(*i);
                break;
            }
        }
    }
    else if(LoggedAthlete::logedAthlete->show_mode()==pingpong)
    {
        vector <supervisor>::iterator startS = Organizers::organizer2->show_supervisors().begin();
        vector <supervisor>::iterator endS = Organizers::organizer2->show_supervisors().end();
        for(vector <supervisor>::iterator i = startS;i!=endS;i++)
        {
            std::string name = i->show_login().show_username;
            if(currentName == name)
            {
                isOK =1;
                LoggedSuper::setlogedSuper(*i);
                break;
            }
        }
    }
    else if(LoggedAthlete::logedAthlete->show_mode()== badminton)
    {
        vector <supervisor>::iterator startS = Organizers::organizer3->show_supervisors().begin();
        vector <supervisor>::iterator endS = Organizers::organizer3->show_supervisors().end();
        for(vector <supervisor>::iterator i = startS;i!=endS;i++)
        {
            std::string name = i->show_login().show_username;
            if(currentName == name)
            {
                isOK =1;
                LoggedSuper::setlogedSuper(*i);
                break;
            }
        }
    }

    //end of checking



    if(isOK)
    {
        supervizor_page superPage;
        superPage.exec();
    }
    else
    {
        QMessageBox::information(this,"Error","You are not the supervizor\t");
    }
}

void Athlete::on_show_scores_clicked()
{
    ShowMode::showmode = _score;
    show_infos_page showPage;
    showPage.exec();

}

void Athlete::on_show_tour_match_clicked()
{
    ShowMode::showmode = _owntournoments;
    show_infos_page showPage;
    showPage.exec();
}

void Athlete::on_show_other_athletes_clicked()
{
    ShowMode::showmode = _othersathletes;
    show_infos_page showPage;
    showPage.exec();
}
