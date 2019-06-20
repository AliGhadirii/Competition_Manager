#include "supervisor.h"
supervisor::supervisor()
{

}
supervisor::supervisor(string _name, login _log) : athlete(_name, _log)
{

}
//void supervisor::insert_team_to_tour(tournament ob1, team ob2)
//{
//	ob1.show_teams().push_back(ob2);
//}
//void supervisor::delete_team_from_tour(tournament ob1, team ob2)
//{
//	ob1.show_teams().erase(find(ob1.show_teams().begin(), ob1.show_teams().end(), ob2));
//}
//void supervisor::insert_athlete_to_team(team ob1, athlete ob2)
//{
//	ob1.show_athletes().push_back(ob2);
//}
//void supervisor::delete_athlete_from_team(team ob1, athlete ob2)
//{
//	ob1.show_athletes().erase(find(ob1.show_athletes().begin(), ob1.show_athletes().end(), ob2));
//}
//void supervisor::insert_team_to_athlete(athlete ob1, team ob2)
//{
//	ob1.insert_team_for_own(ob2);
//}
//void supervisor::delete_team_from_athlete(athlete ob1, team ob2)
//{
//	ob1.delete_team_from_own(ob2);
//}
//void supervisor::delete_team(organizer ob1, team ob2)
//{
//	ob1.show_teams().erase(find(ob1.show_teams().begin(), ob1.show_teams().end(), ob2));
//}
supervisor::~supervisor()
{

}
