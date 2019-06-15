#include "making_team_page.h"
#include "ui_making_team_page.h"
#include<QMessageBox>

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
    /* first check if name is not used before
       if it is ok make the team
       else send a warning         */

      char isOK = 1;
      // check name:
      std::string teamName = ui->team_name_input->text().toStdString();
      switch(LoggedAthlete::logedAthlete->show_mode())
      {
        case football :
          for(vector <team>::iterator i = Organizers::organizer1->show_teams().begin();i != Organizers::organizer1->show_teams().end();i++)
          {
             if(i->show_name() == teamName)
             {
                 isOK = 0;
             }
          }
          break;
        case pingpong :
          for(vector <team>::iterator i = Organizers::organizer2->show_teams().begin();i != Organizers::organizer2->show_teams().end();i++)
          {
             if(i->show_name() == teamName)
             {
                 isOK = 0;
             }
          }
          break;
        case badminton :
          for(vector <team>::iterator i = Organizers::organizer3->show_teams().begin();i != Organizers::organizer3->show_teams().end();i++)
          {
             if(i->show_name() == teamName)
             {
                 isOK = 0;
             }
          }
          break;
      }

      // end check name


      if(isOK)
      {
          // make this athlete supervizor of this team
          //make team

          switch(LoggedAthlete::logedAthlete->show_mode())
          {
            case football :
              LoggedAthlete::logedAthlete->insert_team(*Organizers::organizer1,teamName);
              break;
            case pingpong :
              LoggedAthlete::logedAthlete->insert_team(*Organizers::organizer2,teamName);
              break;
            case badminton :
              LoggedAthlete::logedAthlete->insert_team(*Organizers::organizer3,teamName);
              break;
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
