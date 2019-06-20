#include "signup.h"
#include "ui_signup.h"
#include "organizer.h"
#include "athlete.h"
#include <vector>
#include <QMessageBox>
#include "login.h"
signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_ok_clicked()
{
    if((!ui->football && !ui->pingpong && !ui->badminton) || ui->name->text().isEmpty() || ui->username->text().isEmpty() || ui->password->text().isEmpty())
        QMessageBox::warning(this , "warning" , "warning");
    else{
        login log(ui->username->text().toStdString() , ui->password->text().toStdString());
        athlete ath(ui->name->text().toStdString() , log);
        if(ui->football){
            extern organizer f ;
            f.insert_athlete(ath);
        }
        if(ui->pingpong){
            extern organizer p ;
            p.insert_athlete(ath);
        }
        if(ui->badminton){
            extern organizer b ;
            b.insert_athlete(ath);
        }
        QMessageBox::information(this , "signed up" , "you are signed up");
        ui->name->clear();
        ui->username->clear();
        ui->password->clear();
        hide();
    }
}
