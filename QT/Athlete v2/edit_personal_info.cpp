#include "edit_personal_info.h"
#include "ui_edit_personal_info.h"
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

edit_personal_info::edit_personal_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_personal_info)
{
    ui->setupUi(this);
    ui->password_input->setEchoMode(QLineEdit::EchoMode::Password);
}

edit_personal_info::~edit_personal_info()
{
    delete ui;
}

void edit_personal_info::on_submit_button_clicked()
{
    std::string name = ui->name_input->text().toStdString();
    std::string username = ui->username_input->text().toStdString();
    std::string password = ui->password_input->text().toStdString();

    //now changing the informations
    // have to use setters of athlete which is loged in

    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete *_loggedAthlete;

    for(auto st = f.show_athletes().begin() ;st != f.show_athletes().end();st++)
    {
        if(st->show_name() == _loggedAthlete->show_name())
        {
            if(st->show_login().show_username() == _loggedAthlete->show_login().show_username())
            {
                st->edit_name(name);
                st->show_login().edit_username(username);
                st->show_login().edit_password(password);
                break;
            }
        }
    }
    for(auto st = p.show_athletes().begin() ;st != f.show_athletes().end();st++)
    {
        if(st->show_name() == _loggedAthlete->show_name())
        {
            if(st->show_login().show_username() == _loggedAthlete->show_login().show_username())
            {
                st->edit_name(name);
                st->show_login().edit_username(username);
                st->show_login().edit_password(password);
                break;
            }
        }
    }
    for(auto st = b.show_athletes().begin() ;st != f.show_athletes().end();st++)
    {
        if(st->show_name() == _loggedAthlete->show_name())
        {
            if(st->show_login().show_username() == _loggedAthlete->show_login().show_username())
            {
                st->edit_name(name);
                st->show_login().edit_username(username);
                st->show_login().edit_password(password);
                break;
            }
        }
    }
    //end of changes
    ui->name_input->clear();
    ui->username_input->clear();
    ui->password_input->clear();
    this->close();
}
