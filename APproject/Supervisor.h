#pragma once
class Supervisor:public athlete
{
public:
	friend class team;
	friend class Organizer;
	Supervisor();

	~Supervisor();
};

