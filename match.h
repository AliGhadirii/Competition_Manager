#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#include"datetime.h"
#include"team.h"
class match
{
    team team1, team2;
    datetime startdt;
    datetime enddt;
    int score1, score2;
    int status;
    //const mode md;
public:
    match();
    match(team _team1, team _team2, datetime _startdt, datetime _enddt , int _status , int _score1 , int _score2);//status ro -1 kon
    void edit_status(int _status);
    void edit_scores(int _score1, int _score2);
    void edit_startdt(datetime _startdt);
    void edit_enddt(datetime _enddt);
    team show_team1();
    team show_team2();
    datetime show_startdt();
    datetime show_enddt();
    int show_status();
    int show_score1();
    int show_score2();
    bool operator == (match ob);
    //mode show_mode()const;
    ~match();
};
