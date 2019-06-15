#pragma once
#include"Header.h"
class organizer;
class athlete
{
protected:
	string name;
	login log;
	const mode md;
	vector <team> teams;
public:
	athlete();
	athlete(string _name, mode _md , login _log);
	void insert_athlete(organizer ob);
	void delete_athlete(organizer ob);
	void insert_team(organizer ob,string name); //ob super ham bezas etelaat in yaroo ro beriz to etelaat super!
	//yaroo ro be athleta (team) azafe kon
	void insert_team_for_own(team ob);
	void delete_team_from_own(team ob);
	vector <team> show_teams()const;
	void edit_name(string _name);
	login show_login()const;
	string show_name()const;
	mode show_mode()const;
	~athlete();
};
