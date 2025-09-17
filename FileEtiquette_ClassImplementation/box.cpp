#include "box.h"
#include "global.h"

Box::Box(int r, int c) {
	col = c;
	row = r;
	height = BOX_SIZE;
	width = BOX_SIZE;

	//Allocate space for figure
	sprite = new char* [height];
	for (int i = 0; i < height; i++) {
		sprite[i] = new char[width];
	}

	//Initialize figure
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			sprite[i][j] = ALIVE;
		}
	}

}

Box::~Box() {
	for (int i = 0; i < height; i++) {
		delete[] sprite[i];
	}
	delete[] sprite;
}