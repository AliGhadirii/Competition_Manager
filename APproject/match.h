#pragma once
class match
{
	team team1, team2;
	datetime startdt;
	datetime enddt;
	int score1, score2;
	int status;
public:
	match(team _team1,team _team2,datetime _startdt, datetime _enddt);//status ro -1 kon
	void edit_status(int _status);
	void edit_scores(int _score1, int _score2);
	void edit_startdt(datetime _startdt);
	void edit_enddt(datetime _enddt);
	team show_team1()const;
	team show_team2()const;
	datetime show_startdt() const;
	datetime show_enddt() const;
	int show_status()const;
	int* show_scores()const;
	~match();
};

