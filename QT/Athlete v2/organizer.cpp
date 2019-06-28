#include "organizer.h"
#include <QDebug>
#include <QString>
#include <string>
#include <sstream>
organizer::organizer() : md()
{

}
organizer::organizer(mode _md, login _log) : md(_md)
{
    log = _log;
}
void organizer::insert_tour(tournament ob)
{
    tournaments.push_back(ob);
}
void organizer::delete_tour(tournament ob)
{
    tournaments.erase(find(tournaments.begin(), tournaments.end(), ob));
}
void organizer::insert_athlete(athlete ob)
{
    athletes.push_back(ob);
}
void organizer::delete_athlete(athlete ob)
{
    athletes.erase(find(athletes.begin() , athletes.end() , ob));
}
void organizer::insert_team(team ob)
{
    teams.push_back(ob);
}
void organizer::delete_team(team ob)
{
    teams.erase(find(teams.begin() , teams.end() , ob));
}
vector <tournament> organizer::show_tours()
{
    return tournaments;
}
void organizer::sort_teams()
{
    sort(teams.begin(), teams.end(), []( team a,  team b) -> bool
    {
        return (a.show_score() > b.show_score());
    });
}
vector <team> organizer::show_teams()
{
    sort_teams();
    return teams;
}
vector <athlete> organizer::show_athletes()
{
    return athletes;
}
//vector <supervisor> organizer::show_supervisors()
//{
   // return supervisors;
//}
mode organizer::show_mode()
{
    return md;
}
login organizer::show_login()
{
    return log;
}
void organizer::edit_login(login _log)
{
    log = _log;
}

void organizer::edit_mode(int _md)
{
    if(_md == 0)
        md = football;
    else if(_md == 1)
        md = pingpong;
    else if(_md == 2)
        md = badminton;
    else
        return;
}
istream & operator >> (istream & in , organizer & ob)
{
    int _md ;
    string _username , _password , temp;
    in >> _md >> _username >> _password >> temp ;
    ob.edit_mode(_md);
    login l (_username , _password);
    ob.edit_login(l);
    while(1){
        in >> temp ;

        if(temp == "end_athletes")
            break;
        in >> _username >> _password ;
        login log(_username , _password);
        athlete ath(temp , log);
        ob.insert_athlete(ath);

    }
    in >> temp ;
    while(1){
        in >> temp ;
        if(temp == "end_teams")
            break ;
        string name = temp ;
        int _score , _win , _draw , _loss , _gf , _ga , _gd ;
        in >> _score >> _win >> _draw >> _loss >> _gf >> _ga >> _gd >> temp >> temp >> _username >> _password ;
        login log(_username , _password);
        supervisor super(temp , log);
        team t(name , super , _score ,  _win , _draw , _loss , _gf , _ga , _gd);
        t.insert_athlete(super);
        while(1){
            in >> temp ;
            if(temp == "end_athletes")
                break;
            in >> _username >> _password ;
            login log(_username , _password);
            athlete ath(temp , log);
            t.insert_athlete(ath);
        }
        ob.insert_team(t);
    }
    in >> temp ;
    while(1){
        in >> temp ;
        if(temp == "end_tournaments")
            break ;
        int _year , _month , _day , _hour , _minute , _second;
        in >> _year >> _month >> _day >> _hour >> _minute >> _second ;
        datetime start(_year , _month , _day , _hour , _minute , _second);
        in >> _year >> _month >> _day >> _hour >> _minute >> _second ;
        datetime end(_year , _month , _day , _hour , _minute , _second);
        tournament tour(temp , start , end);
        in >> temp ;
        while(1){
            in >> temp ;
            if(temp == "end_teams")
                break ;
            string name = temp ;
            int _score , _win , _draw , _loss , _gf , _ga , _gd ;
            in >> _score >> _win >> _draw >> _loss >> _gf >> _ga >> _gd >> temp >> temp >> _username >> _password ;
            login log(_username , _password);
            supervisor super(temp , log);
            team t(name , super , _score ,  _win , _draw , _loss , _gf , _ga , _gd);
            t.insert_athlete(super);
            while(1){
                in >> temp ;
                if(temp == "end_athletes")
                    break;
                in >> _username >> _password ;
                login log(_username , _password);
                athlete ath(temp , log);
                t.insert_athlete(ath);
            }
            tour.insert_team(t);
        }
        in >> temp ;
        while(1){
            in >> temp ;
            if(temp == "end_matches")
                break ;
            int _status , _score1 , _score2 ;
            in >> _score1 >> _score2;
            _status = std::atoi (temp.c_str());
            in >> _year >> _month >> _day >> _hour >> _minute >> _second ;
            datetime start(_year , _month , _day , _hour , _minute , _second);
            in >> _year >> _month >> _day >> _hour >> _minute >> _second ;
            datetime end(_year , _month , _day , _hour , _minute , _second);
            int _score , _win , _draw , _loss , _gf , _ga , _gd ;
            string name ;
            in >> name >> _score >> _win >> _draw >> _loss >> _gf >> _ga >> _gd  >> temp >> temp >> _username >> _password ;

            login log(_username , _password);
            supervisor super(temp , log);
            team t(name , super , _score ,  _win , _draw , _loss , _gf , _ga , _gd);
            t.insert_athlete(super);
            while(1){
                in >> temp ;
                if(temp == "end_athletes")
                    break;
                in >> _username >> _password ;
                login log(_username , _password);
                athlete ath(temp , log);
                t.insert_athlete(ath);
            }
            in >> name >> _score >> _win >> _draw >> _loss >> _gf >> _ga >> _gd >> temp >> temp >> _username >> _password ;
            login log2(_username , _password);
            supervisor super2(temp , log2);
            team t2(name , super2 , _score ,  _win , _draw , _loss , _gf , _ga , _gd);
            t2.insert_athlete(super2);
            while(1){
                in >> temp ;
                if(temp == "end_athletes")
                    break;
                in >> _username >> _password ;
                login log(_username , _password);
                athlete ath(temp , log);
                t2.insert_athlete(ath);
            }
            match mat(t , t2 ,start , end , _status , _score1 , _score2);
            tour.insert_match(mat);
        }
        ob.insert_tour(tour);
    }
    return in ;
}
ostream & operator << (ostream & out , organizer & ob)
{
    out << ob.show_mode() << " " << ob.show_login().show_username() << " " << ob.show_login().show_password() << " start_athletes " ;
    vector <athlete> ath = ob.show_athletes();
    vector <team> t = ob.show_teams();
    vector <tournament> tour = ob.show_tours();
    for(auto i = ath.begin() ; i != ath.end() ; i++)
        out << i->show_name() << " " << i->show_login().show_username() << " " << i->show_login().show_password() << " ";
    out << "end_athletes start_teams ";
    for(auto j = t.begin() ; j != t.end() ; j++){
        out << j->show_name() << " " << j->show_score() << " " << j->show_win() << " " << j->show_draw() << " " << j->show_loss() << " " << j->show_gf() << " " << j->show_ga() << " " << j->show_gd() << " start_athletes ";
        vector <athlete> t_ath = j->show_athletes();
        for(auto i = t_ath.begin() ; i != t_ath.end() ; i++)
            out << i->show_name() << " " << i->show_login().show_username() << " " << i->show_login().show_password() << " ";
        out << "end_athletes ";
    }
    out << "end_teams start_tournaments ";
    for(auto k = tour.begin() ; k != tour.end() ; k++){
        out << k->show_name() << " " << k->show_startdt().show_datetime()[0] << " " << k->show_startdt().show_datetime()[1] << " " << k->show_startdt().show_datetime()[2] << " " << k->show_startdt().show_datetime()[3] << " " << k->show_startdt().show_datetime()[4] << " " << k->show_startdt().show_datetime()[5] << " " << k->show_enddt().show_datetime()[0] << " " << k->show_enddt().show_datetime()[1] << " " << k->show_enddt().show_datetime()[2] << " " << k->show_enddt().show_datetime()[3] << " " << k->show_enddt().show_datetime()[4] << " " << k->show_enddt().show_datetime()[5] << " start_teams ";
        vector <team> tour_team = k->show_teams();
        for(auto j = tour_team.begin() ; j != tour_team.end() ; j++){
            out << j->show_name() << " " << j->show_score() << " " << j->show_win() << " " << j->show_draw() << " " << j->show_loss() << " " << j->show_gf() << " " << j->show_ga() << " " << j->show_gd() << " start_athletes ";
            vector <athlete> t_ath = j->show_athletes();
            for(auto i = t_ath.begin() ; i != t_ath.end() ; i++)
                out << i->show_name() << " " << i->show_login().show_username() << " " << i->show_login().show_password() << " ";
            out << "end_athletes ";
        }
        out << "end_teams start_matches ";
        vector <match> m = k->show_matches();
        for(auto l = m.begin() ; l != m.end() ; l++){
            out << l->show_status() << " " << l->show_score1() << " " << l->show_score2() << " " << l->show_startdt().show_datetime()[0] << " " << l->show_startdt().show_datetime()[1] << " " << l->show_startdt().show_datetime()[2] << " " << l->show_startdt().show_datetime()[3] << " " << l->show_startdt().show_datetime()[4] << " " << l->show_startdt().show_datetime()[5] << " " << l->show_enddt().show_datetime()[0] << " " << l->show_enddt().show_datetime()[1] << " " << l->show_enddt().show_datetime()[2] << " " << l->show_enddt().show_datetime()[3] << " " << l->show_enddt().show_datetime()[4] << " " << l->show_enddt().show_datetime()[5] << " " << l->show_team1().show_name() << " " << l->show_team1().show_score() << " " << l->show_team1().show_win() << " " << l->show_team1().show_draw() << " " << l->show_team1().show_loss() << " " << l->show_team1().show_gf() << " " << l->show_team1().show_ga() << " " << l->show_team1().show_gd() << " start_athletes ";
            vector <athlete> ath1 = l->show_team1().show_athletes();
            vector <athlete> ath2 = l->show_team2().show_athletes();
            for(auto i = ath1.begin() ; i != ath1.end() ; i++)
                out << i->show_name() << " " << i->show_login().show_username() << " " << i->show_login().show_password() << " ";
            out << "end_athletes " << l->show_team2().show_name() << " " << l->show_team2().show_score() << " " << l->show_team2().show_win() << " " << l->show_team2().show_draw() << " " << l->show_team2().show_loss() << " " << l->show_team2().show_gf() << " " << l->show_team2().show_ga() << " " << l->show_team2().show_gd() << " start_athletes ";
            for(auto i = ath2.begin() ; i != ath2.end() ; i++)
                out << i->show_name() << " " << i->show_login().show_username() << " " << i->show_login().show_password() << " ";
            out << "end_athletes ";
        }
        out << "end_matches ";
    }
    out << "end_tournaments";
    return  out;
}
organizer::~organizer()
{

}
