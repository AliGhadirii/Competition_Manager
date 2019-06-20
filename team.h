#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include"supervisor.h"
#include"athlete.h"
class team
{
    string name;
    vector <athlete> athletes;
    //vector <match> matches;
    //vector <tournament> tournaments;
    int score, win, draw, loss, gf, ga, gd;
    supervisor super;
    //const mode md;
public:
    team();
    team(string _name,  supervisor _super , int _score , int _win , int _draw , int _loss , int _gf , int _ga , int _gd);// set gf,... yadad nare!
    //void insert_match_for_own(match ob);
    //void delete_match_for_own(match ob);
    //void insert_tour_for_own(tournament ob);
    //void delete_tour_for_own(tournament ob);
    //friend void insert_athlete_to_team(athlete ob);
    //friend void delete_athlete_from_team(athlete ob);
    void insert_athlete(athlete ob);
    void delete_athlete(athlete ob);
    string show_name();
    void edit_name(string _name);
    vector <athlete> show_athletes();
    //vector <match> show_matches()const;
    //vector <tournament> show_toures()const;
    int show_score();
    int show_win();
    int show_draw();
    int show_loss();
    int show_gf();
    int show_ga();
    int show_gd();
    void edit_score(int _score);
    void edit_win();
    void edit_draw();
    void edit_loss();
    void edit_gf(int _gf);
    void edit_ga(int _ga);
    void edit_gd();
    supervisor show_super();
    void edit_super(supervisor ob);
    //mode show_mode()const;
    bool operator == (team ob);
    ~team();
};
