#include "Payment.h"
#include"Car.h"
#include<iostream>
using namespace std;

Payment::Payment()
{

}

void Payment::set_card_name(string Name_1, string Name_2, string Name_3, string Name_4)
{
	card_holder_name = Name_1 + " " + Name_2 + " " + Name_3 + " " + Name_4;
}

void Payment::set_card_number(long long Number_1)
{
	card_number = Number_1;
}

void Payment::set_expired_Data(string Data_1)
{
	expired_Data = Data_1;
}

void Payment::set_CVV(int CVV_1)
{
	CVV = CVV_1;
}
Payment ::~Payment()
{

}	