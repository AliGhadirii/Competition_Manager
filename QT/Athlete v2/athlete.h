#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include"login.h"
class athlete
{
protected:
    string name;
    login log;
    //const mode md;
    //vector <team> teams;
public:
    athlete();
    athlete(string _name, login _log);
    //void insert_athlete(organizer ob);
    //void delete_athlete(organizer ob);
    //void insert_team(organizer ob); //ob super ham bezas etelaat in yaroo ro beriz to etelaat super!
    //yaroo ro be athleta (team) azafe kon
    //void insert_team_for_own(team ob);
    //void delete_team_from_own(team ob);
    //vector <team> show_teams()const;
    void edit_name(string _name);
    login show_login();
    string show_name();
    bool operator == (athlete ob);
    //mode show_mode()const;
    ~athlete();
};
