//#include"\ApProject-master\Header.h"  //this is temporay
#include"loggedathlete.h"

#include "athlete.h"
#include <QApplication>


#include<iostream>
#include<stdlib.h>


int main(int argc, char *argv[])
{

    //fining logged athlete in a way
    athlete *ob;// make this athlete




    LoggedAthlete::setlogedthlete(*ob);
    // getting organizers
    organizer *o1,*o2,*o3;





    Organizers::setOrganizers(*o1,*o2,*o3);


//start application
    QApplication a(argc, argv);
    Athlete w;
    w.show();

    return a.exec();
}
