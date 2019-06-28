#include "t_match.h"
#include "ui_t_match.h"
#include "tournament.h"
#include "match.h"
#include <vector>
t_match::t_match(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_match)
{
    ui->setupUi(this);
    extern tournament t;
    vector <match> m = t.show_matches();
    for(auto i = m.begin() ; i != m.end() ; i++)
        if(i->show_status() == -1)
            ui->list->addItem(QString::fromStdString(i->show_team1().show_name()) + " - " + QString::fromStdString(i->show_team2().show_name()) + "   (match not begins!)");
        else if(i->show_status() == 0)
            ui->list->addItem(QString::fromStdString(i->show_team1().show_name()) + " " + QString::number(i->show_score1()) + " - " + QString::number(i->show_score2()) + " " + QString::fromStdString(i->show_team2().show_name()) + "   (match is runing!)");
        else
            ui->list->addItem(QString::fromStdString(i->show_team1().show_name()) + " " + QString::number(i->show_score1()) + " - " + QString::number(i->show_score2()) + " " + QString::fromStdString(i->show_team2().show_name()) + "   (match ends!)");
}

t_match::~t_match()
{
    delete ui;
}
