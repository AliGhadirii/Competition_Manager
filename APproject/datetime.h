#pragma once
class datetime
{
	int day, month, year;
	int curday, curmonth, curyear;
	int hour, minute, seconde;
	int curhour, curminute, curseconde;
public:
	void setcur();
	void set_time(int _hour,int _minute,int _seconde);
	void set_date(int _day,int _month,int _year);
	datetime();
	~datetime();
};

