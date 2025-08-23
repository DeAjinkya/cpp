// header file for class box
#include<iostream>
using namespace std;

class Box {
public:
	Box() = default; // user defined constructor

	Box(int h, int w, int d);

	void ShowVolume(); // show box volume function

private:
	int height = 10, width = 15, depth = 25;
};