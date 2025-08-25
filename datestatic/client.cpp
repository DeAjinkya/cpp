//class Date 
#include<iostream>
#include"Date.h"
using namespace std;

int main()
{
	Date d1;
	d1.display();

	cout << "\n\tCount:: " << Date::getCount();

	cout << endl << endl;
	return 0;
}