#pragma once
enum mode
{
    football, pingpong, badminton
};
#include<iostream>
#include<fstream>
#include<istream>
#include<ostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#include"tournament.h"
#include"team.h"
#include"athlete.h"
#include"login.h"
#include"supervisor.h"
class organizer
{
    vector <tournament> tournaments;
    vector <team> teams;
    vector <athlete> athletes;
    //vector <supervisor> supervisors;
    login log;
    mode md;
public:
    organizer();
    organizer(mode _md, login _log);
    void insert_tour(tournament ob);
    void delete_tour(tournament ob);
    void insert_athlete(athlete ob);
    void delete_athlete(athlete ob);
    void insert_team(team ob);
    void delete_team(team ob);
    vector <tournament> show_tours();
    /*friend void insert_team_to_tour(team ob);
    friend void delete_team_from_tour(team ob);
    friend void insert_team(team ob);
    friend void insert_athlete();
    friend void delete_athlete(athlete ob);
    friend void delete_team(team ob);*/
    void sort_teams();
    vector <team> show_teams();
    vector <athlete> show_athletes();
    //vector <supervisor> show_supervisors();
    login show_login();
    mode show_mode();
    void edit_mode(int _md);
    void edit_login(login _log);
    friend istream & operator >> (istream & in , organizer & ob);
    friend ostream & operator << (ostream & out , organizer & ob);
    ~organizer();
};
