#pragma once
class tournament
{
	string name;
	tour_mode mode;
	vector <match> matches;
	vector <team> teams;
	datetime startdt;
	datetime enddt;
public:
	tournament(string _name, tour_mode _mode, datetime _startdt, datetime _enddt);
	void insert_match(match ob);
	void delete_match(match ob);
	void edit_match(match ob);
	void insert_team(team ob);
	void delete_team(team ob);
	void edit_team(team ob);
	void edit_std(datetime ob);
	void edit_etd(datetime ob);
	void show_matches() const;
	void show_teams() const;
	datetime show_std() const;
	datetime show_etd() const;
	void sort_teams();
	void edit_name();
	string get_name();
	tour_mode show_mode();
	~tournament();
};

