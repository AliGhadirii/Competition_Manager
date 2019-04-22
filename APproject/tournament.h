#pragma once
class tournament
{
	vector <match> matches;
	vector <team> teams;
	datetime startdt;
	datetime enddt;
public:
	tournament(datetime _startdt,datetime _enddt);
	~tournament();
};

