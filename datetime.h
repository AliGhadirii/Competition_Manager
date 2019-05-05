#pragma once
#include"Header.h"
class datetime
{
	int year, month, day, hour, minute, second;
public:
	datetime(int _year, int _month, int _day, int _hour, int _minute, int _second);
	void edit_datetime(int _year, int _month, int _day, int _hour, int _minute, int _second);
	int * show_datetime()const;
	~datetime();
};