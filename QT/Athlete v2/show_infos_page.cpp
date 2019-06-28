#include "show_infos_page.h"
#include "ui_show_infos_page.h"
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

show_infos_page::show_infos_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::show_infos_page)
{
    ui->setupUi(this);

    //making the list to show

    extern int showmode;
    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    if(showmode == 0) //score
    {
        ui->label->setText("Scores : ");
        for(auto _team =f.show_teams().begin();_team!=f.show_teams().end();_team++ )
        {
            for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
            {
                if(_athlete->show_name() == _loggedAthlete->show_name() )
                {
                    ui->list->addItem(QString::fromStdString(_team->show_name())+" : "+QString::number(_team->show_score()));
                    break;
                }

            }
        }
        for(auto _team =p.show_teams().begin();_team!=p.show_teams().end();_team++ )
        {
            for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
            {
                if(_athlete->show_name() == _loggedAthlete->show_name() )
                {
                    ui->list->addItem(QString::fromStdString(_team->show_name())+" : "+QString::number(_team->show_score()));
                    break;
                }

            }
        }
        for(auto _team =b.show_teams().begin();_team!=b.show_teams().end();_team++ )
        {
            for(auto _athlete = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
            {
                if(_athlete->show_name() == _loggedAthlete->show_name() )
                {
                    ui->list->addItem(QString::fromStdString(_team->show_name())+" : "+QString::number(_team->show_score()));
                    break;
                }

            }
        }
    }// end of score adding

    else if(showmode ==1)//own tournoments
    {
        ui->label->setText("Tournoments you are in  : ");
        for(auto _tour= f.show_tours().begin();_tour!=f.show_tours().end();_tour++ )
        {
            for(auto _team = _tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
            {
                for(auto _athlete  = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                {
                    if(_athlete->show_name() == _loggedAthlete->show_name())
                    {
                        ui->list->addItem(QString::fromStdString(_tour->show_name())+"\t(Football)");
                        break;
                    }

                }
            }
        }
        for(auto _tour= p.show_tours().begin();_tour!=p.show_tours().end();_tour++ )
        {
            for(auto _team = _tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
            {
                for(auto _athlete  = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                {
                    if(_athlete->show_name() == _loggedAthlete->show_name())
                    {
                        ui->list->addItem(QString::fromStdString(_tour->show_name())+"\t(PingPong)");
                        break;
                    }

                }
            }
        }
        for(auto _tour= b.show_tours().begin();_tour!=b.show_tours().end();_tour++ )
        {
            for(auto _team = _tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
            {
                for(auto _athlete  = _team->show_athletes().begin();_athlete != _team->show_athletes().end();_athlete++)
                {
                    if(_athlete->show_name() == _loggedAthlete->show_name())
                    {
                        ui->list->addItem(QString::fromStdString(_tour->show_name())+"\t(Badminton)");
                        break;
                    }

                }
            }
        }

    }
    else if(showmode == 2)//other athletes
    {
        ui->label->setText("Other athletes : ");
        for(auto _athlete = f.show_athletes().begin();_athlete != f.show_athletes().end();_athlete++)
        {
            ui->list->addItem(QString::fromStdString(_athlete->show_name())+"\t(Football)");
        }
        for(auto _athlete = p.show_athletes().begin();_athlete != p.show_athletes().end();_athlete++)
        {
            ui->list->addItem(QString::fromStdString(_athlete->show_name())+"\t(PingPong)");
        }
        for(auto _athlete = b.show_athletes().begin();_athlete != b.show_athletes().end();_athlete++)
        {
            ui->list->addItem(QString::fromStdString(_athlete->show_name())+"\t(Badminton)");
        }

    }

}

show_infos_page::~show_infos_page()
{
    delete ui;
}
