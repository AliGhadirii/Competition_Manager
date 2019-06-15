#include "edit_team_info.h"
#include "ui_edit_team_info.h"
#include<QMessageBox>
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

    //checking team
    vector<team>::iterator startT = LoggedAthlete::logedAthlete->show_teams().begin() ;
    vector<team>::iterator endT = LoggedAthlete::logedAthlete->show_teams().end();

    for(vector<team>::iterator _team =startT;_team!=endT;_team++)
    {
        if( _team->show_name() == oldTeamName )
        {

            if(_team->show_suoer().show_name() == LoggedAthlete::logedAthlete->show_name())
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
