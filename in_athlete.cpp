#include "in_athlete.h"
#include "ui_in_athlete.h"

in_athlete::in_athlete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::in_athlete)
{
    ui->setupUi(this);
}

in_athlete::~in_athlete()
{
    delete ui;
}
