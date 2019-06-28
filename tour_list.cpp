#include "tour_list.h"
#include "ui_tour_list.h"
#include "organizer.h"
#include "tournament.h"
#include <vector>
#include "t_ranking.h"
#include "t_match.h"
tour_list::tour_list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tour_list)
{
    ui->setupUi(this);
    extern organizer temp;
    vector <tournament> t = temp.show_tours() ;
    for(auto i = t.begin() ; i < t.end() ; i++)
        ui->list->addItem(QString::fromStdString(i->show_name()) );
}

tour_list::~tour_list()
{
    delete ui;
}

void tour_list::on_list_itemClicked(QListWidgetItem *item)
{
    QString a = item->text();
    string b = a.toStdString();
    extern organizer temp;
    extern tournament t ;
    vector <tournament> tour = temp.show_tours();
    for(auto i = tour.begin() ; i < tour.end() ; i++){
        if (b == i->show_name())
            t = *i ;
    }
    extern bool t_check;
    if(t_check == 1){
        t_ranking tr;
        tr.setWindowTitle("tournament ranking");
        tr.exec();
    }
    else{
        t_match tm ;
        tm.setWindowTitle("tournament matches");
        tm.exec();
    }
}
