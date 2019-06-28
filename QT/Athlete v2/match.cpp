#include "match.h"
match::match()
{

}
match::match(team _team1, team _team2, datetime _startdt, datetime _enddt , int _status = -1 , int _score1 = 0 , int _score2 = 0)
{
    team1 = _team1;
    team2 = _team2;
    startdt = _startdt;
    enddt = _enddt;
    status = _status;
    score1 = _score1;
    score2 = _score2;
}
void match::edit_status(int _status)
{
    status = _status;
}
void match::edit_scores(int _score1, int _score2)
{
    score1 = _score1;
    score2 = _score2;
    team1.edit_gf(score1);
    team1.edit_ga(score2);
    team1.edit_gd();
    team2.edit_gf(score2);
    team2.edit_ga(score1);
    team2.edit_gd();
    if(score1 > score2){
        team1.edit_win();
        team2.edit_loss();
        team1.edit_score(3);
    }
    else if(score1 < score2){
        team2.edit_win();
        team1.edit_loss();
        team2.edit_score(3);
    }
    else{
        team1.edit_draw();
        team2.edit_draw();
        team1.edit_score(1);
        team2.edit_score(1);
    }
}
void match::edit_startdt(datetime _startdt)
{
    startdt = _startdt;
}
void match::edit_enddt(datetime _enddt)
{
    enddt = _enddt;
}
team match::show_team1()
{
    return team1;
}
team match::show_team2()
{
    return team2;
}
datetime match::show_startdt()
{
    return startdt;
}
datetime match::show_enddt()
{
    return enddt;
}
int match::show_status()
{
    return status;
}
int match::show_score1()
{
    return score1;
}
int match::show_score2()
{
    return score2;
}
//mode match::show_mode()const
//{
//	return md;
//}
bool match::operator == (match ob)
{
    if (team1 == ob.show_team1() && team2 == ob.show_team2() && startdt == ob.show_startdt() && enddt == ob.show_enddt())
        return 1;
    return 0;
}
match::~match()
{

}
