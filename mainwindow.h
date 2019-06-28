#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <fstream>
#include <iostream>
#include<istream>
#include<ostream>
#include "organizer.h"
#include "guest.h"
#include "signup.h"
#include "in_athlete.h"
#include "in_organizer.h"
using namespace std;
namespace Ui {

class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_guest_clicked();

    void on_signup_clicked();

    void on_in_athlete_clicked();

    void on_in_organizer_clicked();

private:
    Ui::MainWindow *ui;
    guest g ;
    signup s ;
    in_athlete a ;
    in_organizer o ;
};

#endif // MAINWINDOW_H
