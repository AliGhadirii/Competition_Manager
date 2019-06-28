#include "Qathlete.h"
#include "ui_athlete.h"
#include "making_team_page.h"
#include "edit_personal_info.h"
#include "supervizor_page.h"
#include "show_infos_page.h"
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

extern int showmode;

Athlete::Athlete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Athlete)
{
    ui->setupUi(this);

    fstream organizers("organizers.txt");
    if( !organizers)
        qDebug () << "error of organizer";
    extern organizer f;
    extern organizer p;
    extern organizer b;
    organizers >> f >> p >> b ;

    //getting the logged athlete
    fstream logAth("loggedAthleteInfo.txt");
    if(!logAth)
        qDebug()<<"error of logged athlete";
    extern athlete *_loggedAthlete;
    std::string name ;
    std::string user;
    std::string pass;
    logAth>>name>>user>>pass;
    login l(user,pass);
    _loggedAthlete = new athlete(name,l);
    logAth.close();

}

Athlete::~Athlete()
{
    fstream organizers("organizers.txt");
    if(!organizers)
        qDebug () << "error";
    extern organizer f;
    extern organizer p;
    extern organizer b;
    organizers << f << endl << p << endl << b ;
    organizers.close();

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

    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    //check if athlete is supervizor or not
    char isOK =1;

    std::string currentName = _loggedAthlete->show_login().show_username();

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
    showmode = 0; // score
    show_infos_page showPage;
    showPage.exec();

}

void Athlete::on_show_tour_match_clicked()
{
    showmode= 1; // own tournoments
    show_infos_page showPage;
    showPage.exec();
}

void Athlete::on_show_other_athletes_clicked()
{
    showmode=2;// other tournoments
    show_infos_page showPage;
    showPage.exec();
}
