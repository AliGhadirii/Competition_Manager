#pragma once
#include"Header.h"
class athlete
{
	string name;
	login ob;
	const mode md;
public:
	athlete();
	athlete(string _name, mode _md);
	void insert_athlete();
	void delete_athlete(athlete ob);
	void insert_team(team ob); //ob super ham bezas etelaat in yaroo ro beriz to etelaat super!
	//yaroo ro be athleta (team) azafe kon
	void delete_team(team ob);
	void edit_name(string _name);
	string show_name()const;
	mode show_mode()const;
	~athlete();
};