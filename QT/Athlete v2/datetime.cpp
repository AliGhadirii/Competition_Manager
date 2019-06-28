#include"datetime.h"
datetime::datetime()
{
}
datetime::datetime(int y, int m, int d, int h, int mi, int s)
{
    td[0] = y;
    td[1] = m;
    td[2] = d;
    td[3] = h;
    td[4] = mi;
    td[5] = s;
    getNewTimeDate();

}
datetime::~datetime()
{
}
void datetime::edit_datetime(int _year, int _month, int _day, int _hour, int _minute, int _second)
{
    td[0] = _year;
    td[1] = _month;
    td[2] = _day;
    td[3] = _hour;
    td[4] = _minute;
    td[5] = _second;
}

int * datetime::show_datetime()
{
    return td;
}

int * datetime::diff_to_now()
{
    getNewTimeDate();

    // Seconds
    if (tdNow[5]<td[5])
    {
        tdNow[4]--;
        tdNow[5] += 60;
    }
    tddif[5] = tdNow[5] - td[5];
    //Minutes
    if (tdNow[4]<td[4])
    {
        tdNow[3]--;
        tdNow[4] += 60;
    }
    tddif[4] = tdNow[4] - td[4];
    //Hours
    if (tdNow[3]<td[3])
    {
        tdNow[2]--;
        tdNow[3] += 24;
    }
    tddif[3] = tdNow[3] - td[3];

    //check for days in a month
    int daylimit;
    switch (tdNow[1])
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
    case 9:
    case 11:
        daylimit = 30;
        break;
    case 2:
        daylimit = 29;
    default:
        daylimit = 30;
    }
    //Days
    if (tdNow[2]<td[2])
    {
        tdNow[1]--;
        tdNow[2] += daylimit;
    }
    tddif[2] = tdNow[2] - td[2];
    //Month
    if (tdNow[1]<td[1])
    {
        tdNow[0]--;
        tdNow[1] += 12;
    }
    tddif[1] = tdNow[1] - td[1];
    //Year
    tddif[0] = tdNow[0] - td[0];

    return tddif;
}

void datetime::getNewTimeDate()
{
    time_t t = time(0);   // get current time
    tm* now = localtime(&t);
    tdNow[0] = now->tm_year + 1900;
    tdNow[1] = now->tm_mon + 1;
    tdNow[2] = now->tm_mday;
    tdNow[3] = now->tm_hour;
    tdNow[4] = now->tm_min;
    tdNow[5] = now->tm_sec;
}
bool datetime::operator == (datetime ob)
{
    if (td == ob.show_datetime())
        return 1;
    return 0;
}
