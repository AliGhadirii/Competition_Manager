#pragma once
class login
{
	string username, password;
public:
	login(string _username, string _password);
	void edit_username(string _username);
	void edit_password(string _password);
	bool check_login(string _username, string _password);
	~login();
};

