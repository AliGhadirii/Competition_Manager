#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include"login.h"
#include"athlete.h"
class supervisor :public athlete
{
public:
    //friend class team;
    supervisor();
    supervisor(string _name, login _log);
    //void insert_team_to_tour(tournament ob1, team ob2); //hamon hamishegi anjam bede (coment to tournament)! //check kon time sabt nam tamom nashode bashe!!
    //void delete_team_from_tour(tournament ob1, team ob2); //hamon hamishegi anjam bede (coment to tournament)!
    //void insert_athlete_to_team(team ob1, athlete ob2);
    //void delete_athlete_from_team(team ob1, athlete ob2);
    //void insert_team_to_athlete(athlete ob1, team ob2);
    //void delete_team_from_athlete(athlete ob1, team ob2);
    //void delete_team(organizer ob1, team ob2);
    ~supervisor();
};
