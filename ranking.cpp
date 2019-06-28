#include "ranking.h"
#include "ui_ranking.h"
#include "organizer.h"
#include <vector>
#include "team.h"
ranking::ranking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ranking)
{
    ui->setupUi(this);
    extern organizer temp;
    vector <team> t = temp.show_teams() ;
    int j = 1 ;
    for(auto i = t.begin() ; i < t.end() ; i++){
        ui->list->addItem( QString::number(j) + " " + QString::fromStdString(i->show_name()) );
        j++;
    }
}

ranking::~ranking()
{
    delete ui;
}
