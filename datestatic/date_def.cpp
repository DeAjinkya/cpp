#include"Date.h"

int Date::count = 1;

/*
Date::Date()
{
	cout << "\nDefault constrcutor invoked";
}*/


Date::Date(int day, int mm, int yy)
{
	this->day = day;
	month = mm;
	year = yy;
}

void Date::display()
{
	cout << "\nDate:: " << day << "/" << month << "/" << year << endl;
}

int Date::getCount()
{
	return count;
}