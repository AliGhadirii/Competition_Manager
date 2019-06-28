#include "t_ranking.h"
#include "ui_t_ranking.h"
#include "tournament.h"
#include "team.h"
#include <vector>
t_ranking::t_ranking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_ranking)
{
    ui->setupUi(this);
    extern tournament t ;
    vector <team> te = t.show_teams() ;
    int j = 1 ;
    for(auto i = te.begin() ; i < te.end() ; i++){
       ui->list->addItem( QString::number(j) + " " + QString::fromStdString(i->show_name()) );
        j++;
    }
}

t_ranking::~t_ranking()
{
    delete ui;
}
