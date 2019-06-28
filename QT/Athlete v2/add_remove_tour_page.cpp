#include "add_remove_tour_page.h"
#include "ui_add_remove_tour_page.h"
#include<QMessageBox>
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

add_remove_tour_page::add_remove_tour_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_remove_tour_page)
{
    ui->setupUi(this);

//    ui->all_tour_list->addItem(QString::fromStdString(i->show_name()));

//    ui->own_tour_list->addItem(QString::fromStdString(LoggedSuper::logedSuper->show_teams().at(j).show_name()+"\t"+t->show_name()));



    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    // All of tournoments and own tournoments

    for(auto _tour = f.show_tours().begin(); _tour != f.show_tours().end();_tour++)
    {
        ui->all_tour_list->addItem(QString::fromStdString(_tour->show_name())+"\t(Football)");
        for(auto _team =_tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
        {
            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                ui->own_tour_list->addItem(QString::fromStdString(_tour->show_name() +"\t(footbal)"+"\t"+_team->show_name()));
            }
        }
    }
    for(auto _tour = p.show_tours().begin(); _tour != p.show_tours().end();_tour++)
    {
        ui->all_tour_list->addItem(QString::fromStdString(_tour->show_name())+"\t(PingPong)");
        for(auto _team =_tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
        {
            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                ui->own_tour_list->addItem(QString::fromStdString(_tour->show_name() +"\t(footbal)"+"\t"+_team->show_name()));
            }
        }
    }
    for(auto _tour = b.show_tours().begin(); _tour != b.show_tours().end();_tour++)
    {
        ui->all_tour_list->addItem(QString::fromStdString(_tour->show_name())+"\t(Badminton)");
        for(auto _team =_tour->show_teams().begin();_team != _tour->show_teams().end();_team++)
        {
            if(_team->show_super().show_name() == _loggedAthlete->show_name())
            {
                ui->own_tour_list->addItem(QString::fromStdString(_tour->show_name() +"\t(footbal)"+"\t"+_team->show_name()));
            }
        }
    }
    //end of adding

}

add_remove_tour_page::~add_remove_tour_page()
{
    delete ui;
}

void add_remove_tour_page::on_add_button_clicked()
{
    std::string tourName = ui->add_tour_name_input->text().toStdString();
    std::string teamName = ui->add_team_name_input->text().toStdString();

    char tourOK = 0;
    char teamOK = 0;

    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    //check tour and team and adding

    auto _team = f.show_teams().begin();
    for(;_team != f.show_teams().end();_team++)
    {
        if(_team->show_name() == teamName)
        {
            teamOK =1;
            break;
        }
    }//founding team

    for(auto _tour =f.show_tours().begin();_tour != f.show_tours().end();_tour++)
    {
        if(_tour->show_name()==tourName)
        {
            tourOK = 1;
            if(teamOK)
            {
                _tour->show_teams().push_back(*_team);
            }
            break;
        }
     }

    if(!teamOK || !tourOK)
    {
        teamOK =0;
        tourOK =0;
        _team = p.show_teams().begin();
        for(;_team != p.show_teams().end();_team++)
        {
            if(_team->show_name() == teamName)
            {
                teamOK =1;
                break;
            }
        }//founding team

        for(auto _tour =p.show_tours().begin();_tour != p.show_tours().end();_tour++)
        {
            if(_tour->show_name()==tourName)
            {
                tourOK = 1;
                if(teamOK)
                {
                    _tour->show_teams().push_back(*_team);
                }
                break;
            }
         }
    }
    if(!teamOK || ! tourOK)
    {
        teamOK =0;
        tourOK =0;
        auto _team = b.show_teams().begin();
        for(;_team != b.show_teams().end();_team++)
        {
            if(_team->show_name() == teamName)
            {
                teamOK =1;
                break;
            }
        }//founding team

        for(auto _tour =b.show_tours().begin();_tour != b.show_tours().end();_tour++)
        {
            if(_tour->show_name()==tourName)
            {
                tourOK = 1;
                if(teamOK)
                {
                    _tour->show_teams().push_back(*_team);
                }
                break;
            }
         }
    }


    //end check and add

    if(teamOK && tourOK)
    {
        ui->add_team_name_input->clear();
        ui->add_tour_name_input->clear();
        ui->remove_team_name_input->clear();
        ui->remove_tour_name_input->clear();
        QMessageBox::information(this,"","Successful!\t");
        this->close();
    }
    else
    {
        QMessageBox::information(this,"Error","Try again something is wrong!\t");
        ui->add_team_name_input->clear();
        ui->add_tour_name_input->clear();
        ui->remove_team_name_input->clear();
        ui->remove_tour_name_input->clear();
    }
    tourOK =0;
    teamOK = 0;

}

void add_remove_tour_page::on_remove_button_clicked()
{
    std::string tourName = ui->remove_tour_name_input->text().toStdString();
    std::string teamName = ui->remove_team_name_input->text().toStdString();

    char tourOK = 0;
    char teamOK = 0;

    extern organizer f;
    extern organizer p;
    extern organizer b;
    extern athlete * _loggedAthlete;

    //check tour and team and removing

    for(auto _tour =f.show_tours().begin();_tour != f.show_tours().end();_tour++)
    {
        if(_tour->show_name()==tourName)
        {
            tourOK = 1;

            auto _team = _tour->show_teams().begin();
            for(;_team != _tour->show_teams().end();_team++)
            {
                if(_team->show_name() == teamName)
                {
                    teamOK =1;
                    break;
                }
            }//founding team

            if(teamOK)
            {
                _tour->show_teams().erase(_team);
            }
            break;
        }
     }

    if(!teamOK || !tourOK)
    {
        teamOK =0;
        tourOK =0;

        for(auto _tour =p.show_tours().begin();_tour != p.show_tours().end();_tour++)
        {
            if(_tour->show_name()==tourName)
            {
                tourOK = 1;

                auto _team = _tour->show_teams().begin();
                for(;_team != _tour->show_teams().end();_team++)
                {
                    if(_team->show_name() == teamName)
                    {
                        teamOK =1;
                        break;
                    }
                }//founding team

                if(teamOK)
                {
                    _tour->show_teams().erase(_team);
                }
                break;
            }
         }
    }
    if(!teamOK || ! tourOK)
    {
        teamOK =0;
        tourOK =0;

        for(auto _tour =b.show_tours().begin();_tour != b.show_tours().end();_tour++)
        {
            if(_tour->show_name()==tourName)
            {
                tourOK = 1;

                auto _team = _tour->show_teams().begin();
                for(;_team != _tour->show_teams().end();_team++)
                {
                    if(_team->show_name() == teamName)
                    {
                        teamOK =1;
                        break;
                    }
                }//founding team

                if(teamOK)
                {
                    _tour->show_teams().erase(_team);
                }
                break;
            }
         }
    }


    //end check and remove


    if(teamOK && tourOK)
    {
        QMessageBox::information(this,"Done","Successfully removed!\t");
        ui->add_team_name_input->clear();
        ui->add_tour_name_input->clear();
        ui->remove_team_name_input->clear();
        ui->remove_tour_name_input->clear();
        this->close();
    }
    else
    {
        QMessageBox::information(this,"Error","Try again something is wrong !\t");
        ui->add_team_name_input->clear();
        ui->add_tour_name_input->clear();
        ui->remove_team_name_input->clear();
        ui->remove_tour_name_input->clear();
    }

}
