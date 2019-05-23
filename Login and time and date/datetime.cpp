#include"datetime.h"

datetime::datetime(int y,int m,int d,int h,int mi,int s)
{
	year = y;
	month = m;
	day = d;
	hour = h;
	min = mi;
	sec = s;
	getNewTimeDate();
	
}
datetime::~datetime()
{
	for(int i=0;i<6;i++)
		tdNow[i]=0;
}

datetime::edit_datetime(int _year, int _month, int _day, int _hour, int _minute, int _second)
{
	year = _year;
	month = _month;
	day = _day;
	hour = _hour;
	min = _minute;
	sec = _second;
}

void datetime::show_datetime(int *time)
{
	time[0]=year;
	time[1]=month;
	time[2]=day;
	time[3]=hour;
	time[4]=min;
	time[5]=sec;
}

void datetime::diff_to_now(int *tddif)
{
	getNewTimeDate();
			
	// Seconds
	if(tdNow[5]<sec)
	{
		tdNow[4]--;
		tdNow[5] += 60;
	}
	tddif[5] = tdNow[5]-sec;
	//Minutes
	if(tdNow[4]<min)
	{
		tdNow[3]--;
		tdNow[4] += 60;
	}
	tddif[4] = tdNow[4]-min;
	//Hours
	if(tdNow[3]<hour)
	{
		tdNow[2]--;
		tdNow[3] += 24;
	}
	tddif[3] = tdNow[3]-hour;
			
	//check for days in a month
	int daylimit ;
	switch(tdNow[1])
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			daylimit = 31;
			break;
		case 4:
		case 6:
		case 9 :
		case 11:
			daylimit = 30;
			break;
		case 2:
			daylimit = 29;
		default:
			daylimit = 30;	
	}
	//Days
	if(tdNow[2]<day)
	{
		tdNow[1]--;
		tdNow[2] += daylimit;
	}
	tddif[2] = tdNow[2]-day;	
	//Month
	if(tdNow[1]<month)
	{
		tdNow[0]--;
		tdNow[1] += 12;
	}
	tddif[1] = tdNow[1]-month;
	//Year
	tddif[0] = tdNow[0]-year;
}

void datetime::getNewTimeDate()
{
	time_t t = time(0);   // get current time
    tm* now = localtime(&t);
    tdNow[0]= now->tm_year+1900 ;
    tdNow[1]=now->tm_mon+1 ;
    tdNow[2]= now->tm_mday;
    tdNow[3]= now->tm_hour;
    tdNow[4]= now->tm_min;
    tdNow[5]= now->tm_sec;
}
