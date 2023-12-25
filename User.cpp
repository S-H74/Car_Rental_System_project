#include "User.h"
User::User()
{
}

User::~User()
{
}

void User::set_name(string name_f)
{
	name = name_f;
}

string User::get_name()
{
	return name;
}

void User::set_last_name(string name_l)
{
	last_name = name_l;
}

string User::get_last_name()
{
	return last_name;
}

void User::set_age(int age1)
{
	age = age1;
}

int User::get_age()
{

	return age;
}

void User::set_account(string account1)
{
	account = account1;
}

string User::get_account()
{
	return account;
}

void User::set_national_number(long long id)
{
	national_number = id;
}

long long User::get_national_number()
{
	return national_number;
}

void User::set_birthday(string birthday1)
{
	birthday = birthday1;
}

string User::get_birthday()
{
	return birthday;
}

void User::set_mobile_phone(int number)
{
	mobile_phone = number;
}

int User::get_mobile_phone()
{
	return mobile_phone;
}

void User::set_nationality(string nationality1)
{
	nationality = nationality1;
}

string User::get_nationality()
{
	return nationality;
}

void User::set_password(string password1)
{
	password = password1;
}

void User::display()
{
	cout << "Full Name: " << name << last_name << "\n" << endl;
	cout << "Account: " << account << "\n" << endl;
	cout << "Phone Number: " << mobile_phone << "\n" << endl;
	cout << "National/Passport Number: " << national_number << "\n" << endl;
	cout << "Nationality: " << nationality << "\n" << endl;
	cout << "Birthday: " << birthday << "\n" << endl;
	cout << "Age: " << age << "\n" << endl;
}

