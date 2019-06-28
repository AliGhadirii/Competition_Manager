#include "Qathlete.h"
#include <QApplication>

#include<iostream>
#include<stdlib.h>
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

extern organizer f;
extern organizer p;
extern organizer b;
extern int showmode;
extern athlete * _loggedAthlete;

int main(int argc, char *argv[])
{

//start application
    QApplication a(argc, argv);
    Athlete w;
    w.show();

    return a.exec();
}
