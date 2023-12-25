#pragma once
#include <iostream>
using namespace std;
class User
{
	string name;
	string last_name;
	string password;
	string account;

	int age;
	long long national_number;
	string birthday;
	int mobile_phone;

	string nationality;

public:
	User();
	~User();

	void set_name(string name_f);
	string get_name();

	void set_last_name(string name_l);
	string get_last_name();

	void set_age(int age1);
	int get_age();

	void set_account(string account1);
	string get_account();


	void set_national_number(long long id);
	long long get_national_number();

	void set_birthday(string birthday1);
	string get_birthday();

	void set_mobile_phone(int number);
	int  get_mobile_phone();

	void set_nationality(string nationality1);
	string get_nationality();

	void set_password(string password1);

	void display();

};

