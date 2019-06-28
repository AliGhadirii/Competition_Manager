#ifndef ATHLETE_H
#define ATHLETE_H

#include <QMainWindow>

#include <QMainWindow>
#include <QDebug>
#include <fstream>
#include <iostream>
#include<istream>
#include<ostream>
#include "organizer.h"
#include"login.h"

namespace Ui {
class Athlete;
}

class Athlete : public QMainWindow
{
    Q_OBJECT

public:

    explicit Athlete(QWidget *parent = nullptr);
    ~Athlete();

private slots:
    void on_make_team_clicked();

    void on_edit_self_info_clicked();

    void on_Supervizor_option_clicked();

    void on_show_scores_clicked();

    void on_show_tour_match_clicked();

    void on_show_other_athletes_clicked();

private:
    Ui::Athlete *ui;
};

#endif // ATHLETE_H
