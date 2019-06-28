#include "making_team_page.h"
#include "ui_making_team_page.h"
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

making_team_page::making_team_page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::making_team_page)
{
    ui->setupUi(this);
}

making_team_page::~making_team_page()
{
    delete ui;
}

void making_team_page::on_make_team_botton_clicked()
{
    std::string teamName = ui->team_name_input->text().toStdString();

    /* first check if name is not used before
       if it is ok make the team
       else send a warning         */

      char isOK = 1;
      // check name:



      extern organizer f;
      extern organizer p;
      extern organizer b;
      extern athlete * _loggedAthlete;

      for(auto i = f.show_teams().begin();i != f.show_teams().end();i++)
      {
        if(i->show_name() == teamName)
        {
            isOK = 0;
        }
      }
      for(auto i = p.show_teams().begin();i != p.show_teams().end();i++)
       {
            if(i->show_name() == teamName)
             {
                 isOK = 0;
             }
       }
       for(auto i = p.show_teams().begin();i != p.show_teams().end();i++)
       {
            if(i->show_name() == teamName)
            {
                 isOK = 0;
            }
       }


      // end check name


      if(isOK)
      {
          // make this athlete supervizor of this team
          //make team
          QString teamMode = ui->team_mode_input->currentText();

          if(teamMode == "Football")
          {
            supervisor *newSuper = new supervisor(_loggedAthlete->show_name(),_loggedAthlete->show_login());
            team * newTeam= new team(teamName,*newSuper,0,0,0,0,0,0,0);
            f.show_teams().push_back(*newTeam);
          }
          else if(teamMode == "PingPong")
          {
              supervisor *newSuper = new supervisor(_loggedAthlete->show_name(),_loggedAthlete->show_login());
              team * newTeam= new team(teamName,*newSuper,0,0,0,0,0,0,0);
              p.show_teams().push_back(*newTeam);
          }
          else if(teamMode == "Badminton")
          {
              supervisor *newSuper = new supervisor(_loggedAthlete->show_name(),_loggedAthlete->show_login());
              team * newTeam= new team(teamName,*newSuper,0,0,0,0,0,0,0);
              b.show_teams().push_back(*newTeam);
          }
          //end make team
          QMessageBox ::information(this,"success","Congeratulations making team <<"+ui->team_name_input->text()+">> was successful \t\t");
          ui->team_name_input->clear();
          this->close();

      }
      else
      {
          QMessageBox ::information(this,"Error","This name has been used .\n Choose another one");
          ui->team_name_input->clear();
      }




}
