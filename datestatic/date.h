//header file for class Date
#include<iostream>
using namespace std;

class Date
{
public:
	Date() = default;  

	Date(int day, int mm, int yy);

	void display();

	static int getCount();

private:
	int day = 1, month = 1, year = 2025; 

	static int count;
};