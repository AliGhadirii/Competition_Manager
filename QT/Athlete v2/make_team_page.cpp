#include "make_team_page.h"
#include <QLineEdit>
#include<QString>
#include<QMessageBox>
#include<QGridLayout>

make_team_page::make_team_page()
{
    /*nameInput = new QLineEdit("");
    nameInput->setAlignment(Qt::AlignLeft);
    nameInput->setMaxLength(15);

    //making font of our display bigger
    QFont font = nameInput->font();
    font.setPointSize(font.pointSize() + 8);
    nameInput->setFont(font);
*/

    display = new QLineEdit("");

    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(15);

    //making font of our display bigger
    QFont font = display->font();
    font.setPointSize(font.pointSize() + 8);
    display->setFont(font);



    // making a layout
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);

    // adding input to layout
//    mainLayout->addWidget(nameInput,1,1,1,4);
     mainLayout->addWidget(display,0,0,1,7);


    //making button
    makeButton = new QPushButton(tr("Make Team"),this);
    // connect button to slot
    connect(makeButton,SIGNAL(clicked()),this,SLOT(makeTeamClicked()));
    // add button to main layout
    mainLayout->addWidget(makeButton,2,2);
}

make_team_page::~make_team_page()
{

}

void make_team_page::makeTeamClicked()
{
  /* first check if name is not used before
     if it is ok make the team
     else send a warning         */

    char isOK = 1;
    // check name:



    // end check name

    if(isOK)
    {
        // make this athlete supervizor of this team
        //make team



        //end make team
        display->clear();
        //this->close();

    }
    else
    {
        QMessageBox ::information(this,"Error","This name has been used .\n Choose another one");
        display->clear();
    }




}
