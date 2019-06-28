#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "organizer.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //fstream athletes_football("athletes_football.txt");
   // fstream teams_football("teams_football.txt");
    //fstream tournaments_football("tournaments_football.txt");
    //fstream athletes_pingpong("athletes_pingpong.txt");
   // fstream teams_pingpong("teams_pingpong.txt");
    //fstream tournaments_pingpong("tournaments_pingpong.txt");
   // fstream athletes_badminton("athletes_badminton.txt");
   // fstream teams_badminton("teams_badminton.txt");
    //fstream tournaments_badminton("tournaments_badminton.txt");
    fstream organizers("organizers.txt");
    if( !organizers)
        qDebug () << "error";
    extern organizer f;
    extern organizer p;
    extern organizer b;
   // while(!organizers.eof())
    organizers >> f >> p >> b ;

}

MainWindow::~MainWindow()
{
    fstream organizers("organizers.txt");
    if(!organizers)
        qDebug () << "error";
    extern organizer f;
    extern organizer p;
    extern organizer b;
    organizers << f << endl << p << endl << b ;
    delete ui;
}

void MainWindow::on_guest_clicked()
{
    g.show();
}

void MainWindow::on_signup_clicked()
{
    s.show();
}

void MainWindow::on_in_athlete_clicked()
{
    a.show();
}

void MainWindow::on_in_organizer_clicked()
{
    o.show();
}
