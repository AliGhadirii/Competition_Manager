#pragma once
class Organizer
{
	vector <tournament> tournaments;
	login ob;
	tour_mode mode;
public:
	Organizer();
	void create_tour(tournament ob);
	vector <tournament> show_tour();
	~Organizer();
};

