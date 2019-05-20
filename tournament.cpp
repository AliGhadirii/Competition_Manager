#include "tournament.h"
tournament::tournament(string _name, mode _md, datetime _startdt, datetime _enddt)
{
	name = _name;
	md = _md;
	startdt = _startdt;
	enddt = _enddt;
}
void tournament::insert_match(match ob)
{
	matches.push_back(ob);
	ob.show_team1().insert_match_for_own(ob);
	ob.show_team2().insert_match_for_own(ob);
}
void tournament::delete_match(match ob)
{
	matches.erase(ob);
	ob.show_team1().delete_match_for_own(ob);
	ob.show_team2().delete_match_for_own(ob);
}
void tournament::edit_match(match ob,match first)
{
	matches.emplace(find(matches.begin(), matches.end(), first), ob);
}
void tournament::insert_team(team ob)
{
	teams.push_back(ob);
	ob.insert_tour_for_own(*this);
}
void tournament::delete_team(team ob)
{
	teams.erase(ob);
	ob.delete_tour_for_own(*this);
}
void tournament::edit_team(team ob, team first)
{
	teams.emplace(find(teams.begin(), teams.end(), first), ob);
	first.delete_tour_for_own(*this);
	ob.insert_tour_for_own(*this);
}
void tournament::edit_startdt(datetime ob)
{
	startdt = ob;
}
void tournament::edit_enddt(datetime ob)
{
	enddt = ob;
}
void tournament::edit_name(string _name)
{
	name = _name;
}
vector <match> tournament::show_matches() const
{
	return matches;
}
vector <team> tournament::show_teams() const
{
	sort_teams();
	return teams;
}
datetime tournament::show_startdt() const
{
	return startdt;
}
datetime tournament::show_enddt() const
{
	return enddt;
}
void tournament::sort_teams()
{
	sort(teams.begin(), teams.end(), sdf);
}
string tournament::show_name()const
{
	return name;
}
mode tournament::show_mode()const
{
	return md;
}
bool sdf(team a, team b)
{
	return a.show_score() > b.show_score();
}
tournament::~tournament()
{

}