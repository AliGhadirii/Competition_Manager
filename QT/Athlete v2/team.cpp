#include "team.h"
team::team()
{

}
team::team(string _name, supervisor _super , int _score = 0 , int _win = 0 , int _draw = 0 , int _loss = 0 , int _gf = 0 , int _ga = 0 , int _gd = 0)
{
    name = _name;
    super = _super;
    score = _score;
    win = _win;
    loss = _loss;
    draw = _draw;
    ga = _ga;
    gd = _gd;
    gf = _gf;
}
//void team::insert_match_for_own(match ob)
//{
//	matches.push_back(ob);
//}
//void team::delete_match_for_own(match ob)
//{
//	matches.erase(find(matches.begin(), matches.end(), ob));
//}
//void team::insert_tour_for_own(tournament ob)
//{
//	tournaments.push_back(ob);
//}
//void team::delete_tour_for_own(tournament ob)
//{
//	tournaments.erase(find(tournaments.begin(), tournaments.end(), ob));
//}
void team::insert_athlete(athlete ob)
{
    athletes.push_back(ob);
}
void team::delete_athlete(athlete ob)
{
    athletes.erase(find(athletes.begin() , athletes.end() , ob));
}
string team::show_name()
{
    return name;
}
void team::edit_name(string _name)
{
    name = _name;
}
vector <athlete> team::show_athletes()
{
    return athletes;
}
//vector <match> team::show_matches()const
//{
//	return matches;
//}
//vector <tournament> team::show_toures()const
//{
//	return tournaments;
//}
int team::show_score()
{
    return score;
}
int team::show_win()
{
    return win;
}
int team::show_draw()
{
    return draw;
}
int team::show_loss()
{
    return loss;
}
int team::show_gf()
{
    return gf;
}
int team::show_ga()
{
    return ga;
}
int team::show_gd()
{
    return gd;
}
void team::edit_score(int _score)
{
    score += _score;
}
void team::edit_win()
{
    win++;
}
void team::edit_draw()
{
    draw++;
}
void team::edit_loss()
{
    loss++;
}
void team::edit_gf(int _gf)
{
    gf += _gf;
}
void team::edit_ga(int _ga)
{
    ga += _ga;
}
void team::edit_gd()
{
    gd = gf - ga ;
}
supervisor team::show_super()
{
    return super;
}
void team::edit_super(supervisor ob){
    super = ob;
}
//mode team::show_mode()const
//{
//	return md;
//}
bool team::operator == (team ob)
{
    if (name == ob.show_name())
        return 1;
    return 0;
}

team::~team()
{

}
