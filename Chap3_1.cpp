// Chap3_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

int main()
{
	string first_name; //
	string friend_name;
	char friend_sex = '0';

	cout << "Type adress name and press enter button:\n";
	cin >> first_name;
	cout << "Dear, " << first_name << "\n" << "How are you? My deals are going well, write me as soon as you can, miss you.\n";
	cout << "Type your friend name: \n";
	cin >> friend_name;
	cout << "Have your seen " << friend_name << " Few weeks ago?\n";
	
	cout << "Choose your gender 'm' or 'f'\n";
	cin >> friend_sex;
	if (friend_sex == 'm') cout << "If you will see " << friend_name << ", let him call me\n";
	if (friend_sex == 'f') cout << "If you will see " << friend_name << ", let her call me\n";

	int age;
	cout << "Enter age of your address member\n";
	cin >> age;
	if (age <= 0 || age >= 100) simple_error("You are kidding!");

	cout << "\nI heard, you had birthday and become " << age << " years\n";
	if (age < 12) cout << "In next year you become " << age + 1 << " years\n";
	if (age == 17) cout << "In next year you could vote for presedent! \n";
	if (age > 60) cout << " I hope you are not boring at your age!\n";

	cout << "\nDear your Ivan\n";
	

	keep_window_open();
	return 0;
}

