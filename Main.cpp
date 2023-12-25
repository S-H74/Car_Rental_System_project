#include <iostream>
#include <fstream>
#include <string>
#include "Car.h"
#include "User.h"
#include "Payment.h"
#include<cstring>


using namespace std;

string name[20], model[20], categ[20], WD[20];
int year[20], pass[20], price[20];
char trans[20];

Car Rent[20];

void txt_input()
{
	ifstream input;

	input.open("Cars_Database.txt");
	for (int i = 0; i < 20; i++)
	{
		input >> name[i] >> model[i] >> year[i] >> trans[i] >> categ[i] >> pass[i] >> price[i] >> WD[i];
	}
	for (int i = 0; i < 20; i++)
	{
		Rent[i].set_car_make(name[i]);
		Rent[i].set_car_model(model[i]);
		Rent[i].set_car_year(year[i]);
		Rent[i].set_car_trans(trans[i]);
		Rent[i].set_car_catig(categ[i]);
		Rent[i].set_car_passenger(pass[i]);
		Rent[i].set_car_price(price[i]);
		Rent[i].set_car_info(WD[i]);
	}
}

int main()
{
	cout << "***************************" << endl;
	cout << "***************************" << endl;
	cout << "Welcome to CarHa Rental App" << endl;
	cout << "***************************" << endl;
	cout << "***************************" << endl;
	cout << endl;
	cout << endl;
checkpoint:

	cout << "***********\t***********" << endl;
	cout << "(1) Login\t(2) SignUp" << endl;
	cout << "***********\t***********" << endl;
	cout << "Enter your choice: " << flush;
	int choice;
	cin >> choice;

	if (choice == 1)
	{
		string  account2, password2;
		User U2;

		cout << "\nEnter your Account :";
		cin >> account2;
		U2.set_account(account2);
		cout << endl;

		cout << "Enter your Password : ";
		cin >> password2;
		U2.set_password(password2);
		cout << endl;
	}
	else if (choice == 2)
	{

		User U1;
		string namef, namel, birthday2, nationality2, account2, password2;
		int age2, number2;
		long long national_number2;

	checkpoint2:

		cout << "\n\t ---------- Pgae of  Inofrmation ---------- \n " << endl;

		cout << "\nEnter your First Name : ";
		cin >> namef;
		U1.set_name(namef);
		cout << endl;

		cout << "Enter your Last Name : ";
		cin >> namel;
		U1.set_last_name(namel);
		cout << endl;

		cout << "Enter your age : ";
		cin >> age2;
		U1.set_age(age2);
		cout << endl;

		cout << "Enter your mobile number : ";
		cin >> number2;
		U1.set_mobile_phone(number2);
		cout << endl;

		cout << "Enter your Birthday : ";
		cin >> birthday2;
		U1.set_birthday(birthday2);
		cout << endl;

		cout << "Enter your Nationality : ";
		cin >> nationality2;
		U1.set_nationality(nationality2);
		cout << endl;

		cout << "Enter your Nationl_Number (OR your Passport Number) : ";
		cin >> national_number2;
		U1.set_national_number(national_number2);
		cout << endl;

		cout << "Enter your Account :";
		cin >> account2;
		U1.set_account(account2);
		cout << endl;

		cout << "Enter your Password : ";
		cin >> password2;
		U1.set_password(password2);
		cout << endl;

	checkpoint_3:

		cout << endl;

		cout << "\t ---------- Confirm Inofrmation ---------- \n " << endl;

		U1.display();
		cout << "--------------  Are these details true ?? (Y/N) : " << flush;
		char ans;
		cin >> ans;
		if (ans == 'y' || ans == 'Y')
		{
			goto done_checkpoint;
		}
		else if (ans == 'n' || ans == 'N')
		{
			goto checkpoint2;
		}
		else
		{
			cout << "Invalid choice!!!!" << endl;
			goto checkpoint_3;
		}
	}
	else
	{
		cout << "Invalid choice!!!!" << endl;
		goto checkpoint;
	}
done_checkpoint:

	txt_input();

	cout << "\n\nEnter Start Date (Day Month Year) : " << flush;
	int day1, month1, year1;
	int total = 0;
	cin >> day1 >> month1 >> year1;

	cout << "/nEnter End Date (Day Month Year) : " << flush;
	int day2, month2, year2;
	cin >> day2 >> month2 >> year2;

	if (day1 > day2 && month1 < month2)
	{
		total = 30 - day1;
		total = total + day2;
		cout << "\nThe total days to rent is : " << total << endl;
	}
	else if (day1 < day2 && month1 == month2)
	{
		total = day2 - day1;
		cout << "\nThe total days to rent is : " << total << endl;
	}
	else if (day1 < day2 && month1 < month2)
	{
		total = 30 - day1;
		total = total + day2;
		cout << "\nThe total days to rent is : " << total << endl;
	}
	else if (day1 == day2 && month1 < month2)
	{
		total = 30 - day1;
		total = total + day2;
		cout << "\nThe total days to rent is : " << total << endl;
	}

	//Date Start_1 = { day1,month1,year1 };
	//Date End_1 = { day2,month2,year2 };



checkpoint_selection:
	cout << "\nWhat Car Category would you like to rent (SUV/ECO/LUX/Sedan): " << flush;
	string Category;
	cin >> Category;
	cout << endl;

	if (Category != "SUV" && Category != "ECO" && Category != "Sedan" && Category != "LUX")
	{
		cout << "Invalid choice" << endl;
		goto checkpoint_selection;
	}

	cout << "\n\t\t\t---------- The available cars -----------" << endl;
	cout << endl;
	cout << "***************************\t\t\t\t\t\t\t\t\t\t\t***************************" << endl;
	cout << "\tBrand\t\t\tModel\t\tYear\tTransmision\tCategory\tPassengers\tPrice\t\tWheel Drive   Total Price" << endl;
	cout << "***************************\t\t\t\t\t\t\t\t\t\t\t***************************" << endl;
	//cout << endl;
	for (int i = 0; i < 20; i++)
	{
		if (Category == Rent[i].get_car_catig())
		{
			cout << "(" << i << ")";
			cout << "\t" << Rent[i].get_car_make();
			cout << "\t\t" << Rent[i].get_car_model();
			cout << "\t\t" << Rent[i].get_car_year();
			cout << "\t\t" << Rent[i].get_car_trans();
			cout << "\t" << Rent[i].get_car_catig();
			cout << "\t\t" << Rent[i].get_car_passenger();
			cout << "\t\t" << Rent[i].get_car_price();
			cout << "\t\t" << Rent[i].get_car_info();
			cout << "\t       " << (Rent[i].get_car_price() * total);
			cout << endl;
			cout << endl;
		}
	}

	int car_choice;

checkpoint_incorrect:

	cout << "\n Enter The number of car you want to rent , (999) To go back to selection : ";
	cin >> car_choice;

	for (int i = 0; i < 20; i++)
	{
		if (i == car_choice)
		{
			Payment P1;

			cout << "\n\n\t\t---------- Inforamtion For Payment --------\n\n" << endl;
			cout << "\t" << Rent[i].get_car_make();
			cout << "\t\t" << Rent[i].get_car_model();
			cout << "\t\t" << Rent[i].get_car_year();
			cout << "\t" << Rent[i].get_car_trans();
			cout << "\t" << Rent[i].get_car_catig();
			cout << "\t\t" << Rent[i].get_car_passenger();
			cout << "\t\t" << Rent[i].get_car_price();
			cout << "\t\t" << Rent[i].get_car_info();
			cout << "\t       " << Rent[i].get_car_price() * total;
			cout << endl;
			cout << endl;

			cout << "Are you sure with your selection? (Y/N) : " << flush;
			char choice_final;
			cin >> choice_final;
			if (choice_final == 'y' || choice_final == 'Y')
			{
				goto checkpoint_payment;
			}
			else if (choice_final == 'n' || choice_final == 'N')
			{
				goto checkpoint_selection;
			}
		checkpoint_payment:

			string holder_1, holder_2, holder_3, holder_4;
			cout << "\nEnter card Holder Name : ";
			cin >> holder_1 >> holder_2 >> holder_3 >> holder_4;
			P1.set_card_name(holder_1, holder_2, holder_3, holder_4);

			long long card_number1;
			cout << "\nEnter the Card Number : ";
			cin >> card_number1;
			P1.set_card_number(card_number1);

			string Data2;
			cout << "\nEnter Expired Data of your card : ";
			cin >> Data2;
			P1.set_expired_Data(Data2);

			int CVV_2;
			cout << "\nEnter The CVV : ";
			cin >> CVV_2;
			P1.set_CVV(CVV_2);

		}
		else if (car_choice == 999)
		{
			goto checkpoint_selection;
		}
	}
	cout << "\n\n------- Payment Complete ,  Thank You For Using The App ------" << endl;
	return 0;
}
