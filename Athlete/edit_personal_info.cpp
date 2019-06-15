#include "edit_personal_info.h"
#include "ui_edit_personal_info.h"


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

    LoggedAthlete::logedAthlete->edit_name(name);
    LoggedAthlete::logedAthlete->show_login().edit_username(username);
    LoggedAthlete::logedAthlete->show_login().edit_password(password);


    //end of changes
    ui->name_input->clear();
    ui->username_input->clear();
    ui->password_input->clear();
    this->close();
}
