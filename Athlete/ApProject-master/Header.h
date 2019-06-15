#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<ctime>
#include<time.h>
#include"tournament.h"
#include"organizer.h"
#include"supervisor.h"
#include"match.h"
#include"team.h"
#include"athlete.h"
#include"match.h"
#include"datetime.h"
#include"login.h"
enum mode
{
	football, pingpong, badminton

};
bool boolsort(team a, team b){
	return (a.show_score() < b.show_score());
}