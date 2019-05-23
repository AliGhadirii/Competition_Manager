#pragma once
#include"Header.h"
#include <ctime>
#include<time.h>

class datetime
{
	int year,month,day;
	int hour,min,sec;
	int tdNow[6];
	void getNewTimeDate();
public:
	datetime(int y,int m,int d,int h,int mi,int s);
	void edit_datetime(int _year, int _month, int _day, int _hour, int _minute, int _second);
	void show_datetime(int *time);
	void diff_to_now(int *tddif);
	~datetime();
};

