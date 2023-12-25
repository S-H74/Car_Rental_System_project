#pragma once
#include <iostream>
using namespace std;
class Car
{
private:
	string car_make;
	string car_model;
	string car_catig;
	int car_year;
	char car_trans;
	int car_passnger;
	float car_price;
	string car_info;


public:
	void set_car_make(string make1);
	string get_car_make();
	void set_car_model(string model1);
	string get_car_model();
	void set_car_catig(string catig);
	string get_car_catig();
	void set_car_year(int year);
	int get_car_year();
	void set_car_trans(char trans);
	char get_car_trans();
	void set_car_passenger(int pass);
	int get_car_passenger();
	void set_car_price(float price);
	float get_car_price();
	void set_car_info(string WD);
	string get_car_info();

};

