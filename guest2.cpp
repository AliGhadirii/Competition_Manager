#include "guest2.h"
#include "ui_guest2.h"
guest2::guest2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::guest2)
{
    ui->setupUi(this);
}

guest2::~guest2()
{
    delete ui;
}

void guest2::on_results_clicked()
{
    tour_list t;
    t.setWindowTitle("tournaments list");
    extern bool t_check ;
    t_check = 0 ;
    t.exec();
}

void guest2::on_ranking_clicked()
{
    ranking ra;
    ra.setWindowTitle("total ranking");
    ra.exec();
}

void guest2::on_t_ranking_clicked()
{
    tour_list t;
    t.setWindowTitle("tournaments list");
    extern bool t_check;
    t_check = 1 ;
    t.exec();
}
