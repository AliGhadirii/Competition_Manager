#include "supervizor_page.h"
#include "ui_supervizor_page.h"
#include "edit_team_info.h"
#include "add_athete_to_team.h"
#include "delete_thlete_from_team_page.h"
#include "add_remove_tour_page.h"
#include <vector>
#include"tournament.h"
#include"organizer.h"
#include"supervisor.h"
#include"match.h"
#include"team.h"
#include"athlete.h"
#include"match.h"
#include"datetime.h"
#include"login.h"

supervizor_page::supervizor_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supervizor_page)
{
    ui->setupUi(this);
}

supervizor_page::~supervizor_page()
{
    delete ui;
}

void supervizor_page::on_edit_team_info_clicked()
{
    edit_team_info editPage;
    editPage.exec();
}

void supervizor_page::on_add_athlete_clicked()
{
    add_athete_to_team addPage;
    addPage.exec();
}

void supervizor_page::on_remove_athlete_clicked()
{
    delete_thlete_from_team_page removePage;
    removePage.exec();
}

void supervizor_page::on_add_remove_athlete_clicked()
{
    add_remove_tour_page arPage;
    arPage.exec();
}
