#include "tournament.h"
tournament::tournament()
{

}
tournament::tournament(string _name, datetime _startdt, datetime _enddt)
{
    name = _name;
    startdt = _startdt;
    enddt = _enddt;
}
void tournament::insert_match(match ob)
{
    matches.push_back(ob);
    //ob.show_team1().insert_match_for_own(ob);
    //ob.show_team2().insert_match_for_own(ob);
}
void tournament::delete_match(match ob)
{
    matches.erase(find(matches.begin(), matches.end(), ob));
    //ob.show_team1().delete_match_for_own(ob);
    //ob.show_team2().delete_match_for_own(ob);
}
void tournament::edit_match(match first, match ob)
{
    replace(matches.begin(), matches.end(), first, ob);
}
void tournament::insert_team(team ob)
{
    teams.push_back(ob);
    //ob.insert_tour_for_own(*this);
}
void tournament::delete_team(team ob)
{
    teams.erase(find(teams.begin(), teams.end(), ob));
    //ob.delete_tour_for_own(*this);
}
void tournament::edit_team(team first, team ob)
{
    replace(teams.begin(), teams.end(), first, ob);
    //first.delete_tour_for_own(*this);
    //ob.insert_tour_for_own(*this);
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
vector <match> tournament::show_matches()
{
    return matches;
}
vector <team> tournament::show_teams()
{
    sort_teams();
    return teams;
}
datetime tournament::show_startdt()
{
    return startdt;
}
datetime tournament::show_enddt()
{
    return enddt;
}
void tournament::sort_teams()
{
    sort(teams.begin(), teams.end(), []( team a,  team b) -> bool
    {
        return (a.show_score() > b.show_score());
    });
}
string tournament::show_name()
{
    return name;
}
//mode tournament::show_mode()const
//{
//	return md;
//}
bool tournament::operator == (tournament ob)
{
    if (name == ob.show_name())
        return 1;
    return 0;
}
tournament::~tournament()
{

}
