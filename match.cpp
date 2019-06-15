#include "match.h"
match::match()
{

}
match::match(team _team1, team _team2, datetime _startdt, datetime _enddt)
{
	team1 = _team1;
	team2 = _team2;
	startdt = _startdt;
	enddt = _enddt;
	status = -1;
}
void match::edit_status(int _status)
{
	status = _status;
}
void match::edit_scores(int _score1, int _score2)
{
	score1 = _score1;
	score2 = _score2;
}
void match::edit_startdt(datetime _startdt)
{
	startdt = _startdt;
}
void match::edit_enddt(datetime _enddt)
{
	enddt = _enddt;
}
team match::show_team1()const
{
	return team1;
}
team match::show_team2()const
{
	return team2;
}
datetime match::show_startdt() const
{
	return startdt;
}
datetime match::show_enddt() const
{
	return enddt;
}
int match::show_status()const
{
	return status;
}
int match::show_score1()const
{
	return score1;
}
int match::show_score2()const
{
	return score2;
}
//mode match::show_mode()const
//{
//	return md;
//}
bool match::operator == (match ob)const
{
	if (team1 == ob.show_team1() && team2 == ob.show_team2() && startdt == ob.show_startdt() && enddt == ob.show_enddt())
		return 1;
	return 0;
}
match::~match()
{

}