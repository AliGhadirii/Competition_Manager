#include "athlete.h"
athlete::athlete() : md()
{

}
athlete::athlete(string _name, mode _md , login _log) : md(_md)
{
	name = _name;
	log = _log;
}
void athlete::insert_athlete(organizer ob)
{
	ob.show_athletes().push_back(*this);
}
void athlete::delete_athlete(organizer ob)
{
	ob.show_athletes().erase(find(ob.show_athletes().begin(), ob.show_athletes().end(), *this));
}
void athlete::insert_team(organizer ob)
{
	supervisor super(this->name, this->md, this->log);
	ob.show_supervisors().push_back(super);
	string name;
	team t(name, this->md, super);
	super.insert_athlete_to_team(t , *this);
	ob.show_teams().push_back(t);
}
void athlete::edit_name(string _name)
{
	name = _name;
}
login athlete::show_login()const
{
	return log;
}
string athlete::show_name() const
{
	return name;
}
mode athlete::show_mode() const
{
	return md;
}
athlete::~athlete()
{

}