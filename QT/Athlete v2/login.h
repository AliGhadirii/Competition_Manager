#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class login
{
    string username, password;
public:
    login();
    login(string _username, string _password);
    void edit_username(string _username);
    void edit_password(string _password);
    bool check_login(string _username, string _password);
    string show_username();
    string show_password();
    ~login();
};
