#pragma once
#include"Header.h"
class organizer
{
	vector <tournament> tournaments;
	vector <team> teams;
	vector <athlete> athletes;
	login ob;
	const mode md;
public:
	organizer(mode _md);
	void insert_tour(tournament ob);
	void delete_tour(tournament ob);
	vector <tournament> show_tours();
	friend void insert_team_to_tour(team ob);
	friend void delete_team_from_tour(team ob);
	friend void insert_team(team ob);
	friend void insert_athlete(athlete ob);
	friend void delete_athlete(athlete ob);
	friend void delete_team(team ob);
	void sort_teams();
	vector <team> show_teams() const;
	vector <athlete> show_athletes() const;
	mode show_mode()const;
	~organizer();
};