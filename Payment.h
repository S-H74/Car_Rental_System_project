#pragma once
#include"Car.h"
#include<string.h>
class Payment : public Car
{
	string card_holder_name;
	long long card_number;
	string  expired_Data;
	int CVV;

public:
	Payment();

	void set_card_name(string Name_1, string Name_2, string Name_3, string Name_4);
	//string get_card_name();

	void set_card_number(long long Number_1);
	//long long get_card_number();

	void set_expired_Data(string Data_1);
	//int get_expired_Data();

	void set_CVV(int CVV_1);

	~Payment();

};



