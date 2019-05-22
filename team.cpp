#include "team.h"
team::team() : md()
{

}
team::team(string _name, mode _md, supervisor _super) : md(_md)
{
	name = _name;
	super = _super;
	score = 0;
	win = 0;
	loss = 0;
	draw = 0;
	ga = 0;
	gd = 0;
	gf = 0;
}
void team::insert_match_for_own(match ob)
{
	matches.push_back(ob);
}
void team::delete_match_for_own(match ob)
{
	matches.erase(find(matches.begin(), matches.end(), ob));
}
void team::insert_tour_for_own(tournament ob)
{
	tournaments.push_back(ob);
}
void team::delete_tour_for_own(tournament ob)
{
	tournaments.erase(find(tournaments.begin(), tournaments.end(), ob));
}
string team::show_name()const
{
	return name;
}
void team::edit_name(string _name)
{
	name = _name;
}
vector <athlete> team::show_athletes()const
{
	return athletes;
}
vector <match> team::show_matches()const
{
	return matches;
}
vector <tournament> team::show_toures()const
{
	return tournaments;
}
int team::show_score()const
{
	return score;
}
int team::show_win()const
{
	return win;
}
int team::show_draw()const
{
	return draw;
}
int team::show_loss()const
{
	return loss;
}
int team::show_gf()const
{
	return gf;
}
int team::show_ga()const
{
	return ga;
}
int team::show_gd()const
{
	return gd;
}
void team::edit_score(int _score)
{
	score = _score;
}
void team::edit_win(int _win)
{
	win = _win;
}
void team::edit_draw(int _draw)
{
	draw = _draw;
}
void team::edit_loss(int _loss)
{
	loss = _loss;
}
void team::edit_gf(int _gf)
{
	gf = _gf;
}
void team::edit_ga(int _ga)
{
	ga = _ga;
}
void team::edit_gd(int _gd)
{
	gd = _gd;
}
supervisor team::show_suoer()const
{
	return super;
}
void team::edit_super(supervisor ob){
	super = ob;
}
mode team::show_mode()const
{
	return md;
}
team::~team()
{

}
