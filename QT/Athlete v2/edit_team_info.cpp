#include "edit_team_info.h"
#include "ui_edit_team_info.h"
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

edit_team_info::edit_team_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_team_info)
{
    ui->setupUi(this);
}

edit_team_info::~edit_team_info()
{
    delete ui;
}

void edit_team_info::on_submit_button_clicked()
{
    //first find the team from team vector of supervizor
    //then change name of team
    //start change

    std::string oldTeamName = ui->old_team_name_input->text().toStdString();
    std::string newTeamName = ui->new_team_name_input->text().toStdString();


    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    //checking team

    for(auto _team =f.show_teams().begin();_team!=f.show_teams().begin();_team++)
    {
        if( _team->show_name() == oldTeamName )
        {

            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                _team->edit_name(newTeamName);
                break;
            }
        }
    }
    for(auto _team =p.show_teams().begin();_team!=f.show_teams().begin();_team++)
    {
        if( _team->show_name() == oldTeamName )
        {

            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                _team->edit_name(newTeamName);
                break;
            }
        }
    }
    for(auto _team =b.show_teams().begin();_team!=f.show_teams().begin();_team++)
    {
        if( _team->show_name() == oldTeamName )
        {

            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                _team->edit_name(newTeamName);
                break;
            }
        }
    }

    //end of change
    QMessageBox::information(this,"success","Successfully chaged\t");
    ui->old_team_name_input->clear();
    ui->new_team_name_input->clear();
    this->close();
}
