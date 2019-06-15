#pragma once
#include"Header.h"

class datetime
{
	int td[6];
	int tddif[6];
	int tdNow[6];
	void getNewTimeDate();
public:
	datetime();
	datetime(int y,int m,int d,int h,int mi,int s);
	void edit_datetime(int _year, int _month, int _day, int _hour, int _minute, int _second);
	int * show_datetime();
	int * diff_to_now();
	~datetime();
};
