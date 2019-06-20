#include "guest.h"
#include "ui_guest.h"
#include <QMessageBox>
#include "organizer.h"
guest::guest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::guest)
{
    ui->setupUi(this);
}

guest::~guest()
{
    delete ui;
}

void guest::on_ok_clicked()
{
    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern organizer temp;
    if(ui->football->isChecked()){
        temp = f ;
        g2.show();
    }
    else if(ui->pingpong->isChecked()){
        temp = p ;
        g2.show();
    }

    else if(ui->badminton->isChecked()){
        temp = b ;
        g2.show();
    }
    else
        QMessageBox::warning(this ,"warning", "you must choose one");
}
