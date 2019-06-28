#include "login.h"
login::login()
{
}
login::login(string _username, string _password)
{
    username = _username;
    password = _password;
}

void login::edit_username(string _username)
{
    username = _username;
}
void login::edit_password(string _password)
{
    password = _password;
}

bool login::check_login(string _username, string _password)
{
    if (username == _username && password == _password)
    {
        return true;
    }
    return false;
}

string login::show_username()
{
    return username;
}

string login::show_password()
{
    return password;
}

login::~login()
{

}
