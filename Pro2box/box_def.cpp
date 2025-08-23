// header file of Time
#include"Box.h"

Box::Box(int h, int w, int d) {
	height = h;
	width = w;
	depth = d;
}

void Box::ShowVolume() {
	cout << "\nheight: " << height << " width: " << width << " depth: " << depth << endl;
	cout << "\nvolume of box = "<< (height*width*depth);
}
