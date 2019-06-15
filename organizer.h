#pragma once
enum mode
{
	football, pingpong, badminton
};
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
#include"tournament.h"
#include"team.h"
#include"athlete.h"
#include"supervisor.h"
#include"login.h"
class organizer
{
	vector <tournament> tournaments;
	vector <team> teams;
	vector <athlete> athletes;
	vector <supervisor> supervisors;
	login log;
	const mode md;
public:
	organizer();
	organizer(mode _md, login _log);
	void insert_tour(tournament ob);
	void delete_tour(tournament ob);
	vector <tournament> show_tours();
	/*friend void insert_team_to_tour(team ob);
	friend void delete_team_from_tour(team ob);
	friend void insert_team(team ob);
	friend void insert_athlete();
	friend void delete_athlete(athlete ob);
	friend void delete_team(team ob);*/
	void sort_teams();
	vector <team> show_teams();
	vector <athlete> show_athletes() const;
	vector <supervisor> show_supervisors()const;
	login show_login()const;
	mode show_mode()const;
	~organizer();
};