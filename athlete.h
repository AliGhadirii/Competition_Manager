#pragma once
#include"Header.h"
class organizer;
class athlete
{
protected:
	string name;
	login log;
	const mode md;
public:
	athlete();
	athlete(string _name, mode _md , login _log);
	void insert_athlete(organizer ob);
	void delete_athlete(organizer ob);
	void insert_team(organizer ob); //ob super ham bezas etelaat in yaroo ro beriz to etelaat super!
	//yaroo ro be athleta (team) azafe kon
	void edit_name(string _name);
	login show_login()const;
	string show_name()const;
	mode show_mode()const;
	~athlete();
};