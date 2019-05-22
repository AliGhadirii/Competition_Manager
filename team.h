#pragma once
#include"Header.h"
class team
{
	string name;
	vector <athlete> athletes;
	vector <match> matches;
	vector <tournament> tournaments;
	int score, win, draw, loss, gf, ga, gd;
	supervisor super;
	const mode md;
public:
	team();
	team(string _name, mode _md, supervisor _super);// set gf,... yadad nare!
	void insert_match_for_own(match ob);
	void delete_match_for_own(match ob);
	void insert_tour_for_own(tournament ob);
	void delete_tour_for_own(tournament ob);
	//friend void insert_athlete_to_team(athlete ob);
	//friend void delete_athlete_from_team(athlete ob);
	string show_name()const;
	void edit_name(string _name);
	vector <athlete> show_athletes()const;
	vector <match> show_matches()const;
	vector <tournament> show_toures()const;
	int show_score()const;
	int show_win()const;
	int show_draw()const;
	int show_loss()const;
	int show_gf()const;
	int show_ga()const;
	int show_gd()const;
	void edit_score(int _score);
	void edit_win(int _win);
	void edit_draw(int _draw);
	void edit_loss(int _loss);
	void edit_gf(int _gf);
	void edit_ga(int _ga);
	void edit_gd(int _gd);
	supervisor show_suoer()const;
	void edit_super(supervisor ob);
	mode show_mode()const;
	~team();
};
