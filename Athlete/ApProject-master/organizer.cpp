#include "organizer.h"
organizer::organizer() : md()
{

}
organizer::organizer(mode _md , login _log) : md(_md)
{
	log = _log;
}
void organizer::insert_tour(tournament ob)
{
	tournaments.push_back(ob);
}
void organizer::delete_tour(tournament ob)
{
	tournaments.erase(find(tournaments.begin(), tournaments.end(), ob));
}
vector <tournament> organizer::show_tours()
{
	return tournaments;
}
void organizer::sort_teams()
{
	sort(teams.begin(), teams.end(), boolsort);
}
vector <team> organizer::show_teams()
{
	sort_teams();
	return teams;
}
vector <athlete> organizer::show_athletes() const
{
	return athletes;
}
vector <supervisor> organizer::show_supervisors() const
{
	return supervisors;
}
mode organizer::show_mode()const
{
	return md;
}
login organizer::show_login()const
{
	return log;
}
organizer::~organizer()
{

}