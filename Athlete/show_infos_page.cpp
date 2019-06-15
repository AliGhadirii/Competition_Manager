#include "show_infos_page.h"
#include "ui_show_infos_page.h"


show_infos_page::show_infos_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_infos_page)
{
    ui->setupUi(this);

    //making the list to show


    switch (ShowMode::showmode)
    {
    case _score:
        ui->label->setText("Scores : ");
        for(vector<team>::iterator i=LoggedAthlete::logedAthlete->show_teams().begin();i!=LoggedAthlete::logedAthlete->show_teams().end();i++ )
        {
            ui->list->addItem(QString::number(i->show_score()));
        }
        break;
    case _owntournoments:
        ui->label->setText("Tournoments you are in  : ");
        for(vector<tournament>::iterator i=LoggedAthlete::logedAthlete->show_teams().show_toures().begin();i!=LoggedAthlete::logedAthlete->show_teams().show_toures().end();i++ )
        {
            std::string tour = i->show_name();
            ui->list->addItem(QString::fromStdString(tour));
        }

        break;
    case _othersathletes:
        ui->label->setText("Other athletes : ");
        if(LoggedAthlete::logedAthlete->show_mode() == football)
        {
            vector <athlete>::iterator start= Organizers::organizer1->show_athletes().begin();
            vector <athlete>::iterator end = Organizers::organizer1->show_athletes().end();
            for(vector <athlete>::iterator i =start;i!=end;i++)
            {
                std::string Ahletename = i->show_name();
                ui->list->addItem(QString::fromStdString(Ahletename));
            }
        }
        else if(LoggedAthlete::logedAthlete->show_mode() == pingpong)
        {
            vector <athlete>::iterator start= Organizers::organizer2->show_athletes().begin();
            vector <athlete>::iterator end = Organizers::organizer2->show_athletes().end();
            for(vector <athlete>::iterator i =start;i!=end;i++)
            {
                std::string Ahletename = i->show_name();
                ui->list->addItem(QString::fromStdString(Ahletename));
            }
        }
        else if(LoggedAthlete::logedAthlete->show_mode() == badminton)
        {
            vector <athlete>::iterator start= Organizers::organizer3->show_athletes().begin();
            vector <athlete>::iterator end = Organizers::organizer3->show_athletes().end();
            for(vector <athlete>::iterator i =start;i!=end;i++)
            {
                std::string Ahletename = i->show_name();
                ui->list->addItem(QString::fromStdString(Ahletename));
            }
        }
        break;
    }

}

show_infos_page::~show_infos_page()
{
    delete ui;
}
