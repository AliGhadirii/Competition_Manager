#include "add_remove_tour_page.h"
#include "ui_add_remove_tour_page.h"
#include<QMessageBox>

add_remove_tour_page::add_remove_tour_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_remove_tour_page)
{
    ui->setupUi(this);

    vector<tournament>::iterator start;
    vector<tournament>::iterator end;

    if(LoggedAthlete::logedAthlete->show_mode() == football )
    {
        // All of tournoments
        start = Organizers::organizer1->show_tours().begin();
        end = Organizers::organizer1->show_tours().end();

        for(vector<tournament>::iterator i =start;i!=end;i++)
        {
            ui->all_tour_list->addItem(QString::fromStdString(i->show_name()));
        }


        //Own tournoments
        for(int j=0;j<LoggedSuper::logedSuper->show_teams().size();j++)
        {
            if(LoggedAthlete::logedAthlete->show_name() == LoggedAthlete::logedAthlete->show_teams().at(j).show_suoer().show_name());
            {
                start =LoggedSuper::logedSuper->show_teams().at(j).show_tours().begin();
                end = LoggedSuper::logedSuper->show_teams().at(j).show_tours().end();
                for(auto t = start;t!=end;t++)
                {
                    ui->own_tour_list->addItem(QString::fromStdString(LoggedSuper::logedSuper->show_teams().at(j).show_name()+"\t"+t->show_name()));

                }
            }

        }



    }
    else if(LoggedAthlete::logedAthlete->show_mode() == pingpong )
    {
        //All tournoments
        start = Organizers::organizer2->show_tours().begin();
        end = Organizers::organizer2->show_tours().end();

        for(vector<tournament>::iterator i =start;i!=end;i++)
        {
            ui->all_tour_list->addItem(QString::fromStdString(i->show_name()));
        }


        //Own tournoments
        for(int j=0;j<LoggedSuper::logedSuper->show_teams().size();j++)
        {
            if(LoggedAthlete::logedAthlete->show_name() == LoggedAthlete::logedAthlete->show_teams().at(j).show_suoer().show_name());
            {
                start =LoggedSuper::logedSuper->show_teams().at(j).show_tours().begin();
                end = LoggedSuper::logedSuper->show_teams().at(j).show_tours().end();
                for(auto t = start;t!=end;t++)
                {
                    ui->own_tour_list->addItem(QString::fromStdString(LoggedSuper::logedSuper->show_teams().at(j).show_name()+"\t"+t->show_name()));

                }
            }

        }

    }
    else if(LoggedAthlete::logedAthlete->show_mode() == badminton )
    {
        //All tournoments
        start = Organizers::organizer3->show_tours().begin();
        end = Organizers::organizer3->show_tours().end();

        for(vector<tournament>::iterator i =start;i!=end;i++)
        {
            ui->all_tour_list->addItem(QString::fromStdString(i->show_name()));
        }


        //Own tournoments
        for(int j=0;j<LoggedSuper::logedSuper->show_teams().size();j++)
        {
            if(LoggedAthlete::logedAthlete->show_name() == LoggedAthlete::logedAthlete->show_teams().at(j).show_suoer().show_name());
            {
                start =LoggedSuper::logedSuper->show_teams().at(j).show_tours().begin();
                end = LoggedSuper::logedSuper->show_teams().at(j).show_tours().end();
                for(auto t = start;t!=end;t++)
                {
                    ui->own_tour_list->addItem(QString::fromStdString(LoggedSuper::logedSuper->show_teams().at(j).show_name()+"\t"+t->show_name()));

                }
            }

        }

    }

}

add_remove_tour_page::~add_remove_tour_page()
{
    delete ui;
}

void add_remove_tour_page::on_add_button_clicked()
{
    std::string tourName = ui->add_tour_name_input->text().toStdString();
    std::string teamName = ui->add_team_name_input->text().toStdString();

    tournament *theTour;
    team * theTeam;

    char tourOK = 0;
    char teamOK = 0;

    //check tour
    if(LoggedAthlete::logedAthlete->show_mode() == football)
    {
        vector<tournament>::iterator start =Organizers::organizer1->show_tours().begin();
        vector<tournament>::iterator end =Organizers::organizer1->show_tours().end();
        for(vector<tournament>::iterator i =start;i!= end;i++)
        {
            if(i->show_name()==tourName)
            {
                tourOK = 1;
                theTour = &(*i);
                break;
            }
        }
    }
    else if(LoggedAthlete::logedAthlete->show_mode() == pingpong)
    {
        vector<tournament>::iterator start =Organizers::organizer2->show_tours().begin();
        vector<tournament>::iterator end =Organizers::organizer2->show_tours().end();
        for(vector<tournament>::iterator i =start;i!= end;i++)
        {
            if(i->show_name()==tourName)
            {
                tourOK = 1;
                theTour = &(*i);
                break;
            }
        }
    }
    else if(LoggedAthlete::logedAthlete->show_mode() == badminton)
    {
        vector<tournament>::iterator start =Organizers::organizer3->show_tours().begin();
        vector<tournament>::iterator end =Organizers::organizer3->show_tours().end();
        for(vector<tournament>::iterator i =start;i!= end;i++)
        {
            if(i->show_name()==tourName)
            {
                tourOK = 1;
                theTour = &(*i);
                break;
            }
        }

    }
    //--------------------------
    //check team
    //checking team
    vector<team>::iterator startT = LoggedAthlete::logedAthlete->show_teams().begin() ;
    vector<team>::iterator endT = LoggedAthlete::logedAthlete->show_teams().end();

    for(vector<team>::iterator _team =startT;_team!=endT;_team++)
    {
        if( _team->show_name() == teamName )
        {

            if(_team->show_suoer().show_name() == LoggedAthlete::logedAthlete->show_name())
            {
                teamOK =1;
                *theTeam = *_team;
                break;
            }
        }
    }
    //-------------
    //adding
    if(teamOK && tourOK)
    {
        LoggedSuper::logedSuper->insert_team_to_tour(theTour,theTeam);
        ui->add_team_name_input->clear();
        ui->add_tour_name_input->clear();
        ui->remove_team_name_input->clear();
        ui->remove_tour_name_input->clear();
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

}

void add_remove_tour_page::on_remove_button_clicked()
{
    std::string tourName = ui->remove_tour_name_input->text().toStdString();
    std::string teamName = ui->remove_team_name_input->text().toStdString();

    tournament *theTour;
    team * theTeam;

    char tourOK = 0;
    char teamOK = 0;

    //checking team
    vector<team>::iterator startT = LoggedAthlete::logedAthlete->show_teams().begin() ;
    vector<team>::iterator endT = LoggedAthlete::logedAthlete->show_teams().end();

    for(vector<team>::iterator _team =startT;_team!=endT;_team++)
    {
        if( _team->show_name() == teamName )
        {

            if(_team->show_suoer().show_name() == LoggedAthlete::logedAthlete->show_name())
            {
                teamOK =1;
                *theTeam = *_team;
                break;
            }
        }
    }
    //-------------
    if(teamOK)
    {
        vector<tournament>::iterator start =theTeam->show_toures().begin();
        vector<tournament>::iterator end =theTeam->show_toures().end();
        for(vector<tournament>::iterator i = start;i!=end;i++)
        {
            if(i->show_name() == tourName)
            {
                tourOK =1;
                theTour = &(*i);
                break;
            }
        }

    }

    if(teamOK && tourOK)
    {
        LoggedSuper::logedSuper->delete_team_from_tour(theTour,theTeam);
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
