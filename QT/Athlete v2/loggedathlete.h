ifndef LOGGEDATHLETE_H
#define LOGGEDATHLETE_H

#include".\ApProject-master\Header.h"  //this is temporay

class LoggedAthlete
{
public:
    static athlete * logedAthlete;
    static void setlogedthlete(athlete & ob)
    {
        *logedAthlete =ob;
    }
};

class LoggedSuper
{
public:
    static supervisor* logedSuper;
    static void setlogedSuper(supervisor & ob)
    {
        *logedAthlete =ob;
    }
};

class Organizers
{
public:
    static organizer* organizer1; //mode 1
    static organizer* organizer2; //mode 2
    static organizer* organizer3; //mode 3
    static void setOrganizers(organizer &o1,organizer &o2,organizer &o3)
    {
        *organizer1 = o1;
        *organizer2 = o2;
        *organizer3 = o3;
    }

};

enum _show_{
    _score,_owntournoments,_othersathletes
};

class ShowMode{
public:
    static _show_ showmode;
};


#endif // LOGGEDATHLETE_H
