#pragma once
#include"Header.h"
class supervisor :public athlete
{
public:
	friend class team;
	supervisor();
	void insert_team_to_tour(team ob); //hamon hamishegi anjam bede (coment to tournament)! //check kon time sabt nam tamom nashode bashe!!
	void delete_team_from_tour(team ob); //hamon hamishegi anjam bede (coment to tournament)!
	void insert_athlete_to_team(athlete ob);
	void delete_athlete_from_team(athlete ob);
	~supervisor();
};

