#include "in_organizer.h"
#include "ui_in_organizer.h"

in_organizer::in_organizer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::in_organizer)
{
    ui->setupUi(this);
}

in_organizer::~in_organizer()
{
    delete ui;
}
