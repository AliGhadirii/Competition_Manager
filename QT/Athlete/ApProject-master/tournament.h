#pragma once
#include"Header.h"
class tournament
{
	string name;
	const mode md;
	vector <match> matches;
	vector <team> teams;
	datetime startdt;
	datetime enddt;
public:
	tournament();
	tournament(string _name, mode _md, datetime _startdt, datetime _enddt);
	void insert_match(match ob); //bad kara asli bara push kardan be vector match haminja boro in match ro ne bazi ha team ham ezafe kon!!
	void delete_match(match ob); //ein balaie ham yaded nare to khod team pak koni match ro!!
	void edit_match(match ob, match first);
	void insert_team(team ob);
	void delete_team(team ob);
	void edit_team(team ob, team first);
	void edit_startdt(datetime ob);
	void edit_enddt(datetime ob);
	void edit_name(string _name);
	vector <match> show_matches() const;
	vector <team> show_teams();
	datetime show_startdt() const;
	datetime show_enddt() const;
	void sort_teams();
	string show_name()const;
	mode show_mode()const;
	~tournament();
};