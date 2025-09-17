#include "bigblink.h"
#include "life.h"
#include "global.h"

BigBlink::BigBlink(int r, int c) {
	col = c;
	row = r;
	height = BIGBLINK_SIZE;
	width = BIGBLINK_SIZE;

	//Allocate space for figure
	sprite = new char* [height];
	for (int i = 0; i < height; i++) {
		sprite[i] = new char[width];
	}

	//Initialize figure
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			sprite[i][j] = DEAD;
		}
	}
	sprite[0][4] = ALIVE;
	sprite[1][4] = ALIVE;
	sprite[2][4] = ALIVE;

	sprite[6][4] = ALIVE;
	sprite[7][4] = ALIVE;
	sprite[8][4] = ALIVE;

	sprite[4][0] = ALIVE;
	sprite[4][1] = ALIVE;
	sprite[4][2] = ALIVE;

	sprite[4][6] = ALIVE;
	sprite[4][7] = ALIVE;
	sprite[4][8] = ALIVE;

}

BigBlink::~BigBlink() {
	for (int i = 0; i < height; i++) {
		delete[] sprite[i];
	}
	delete[] sprite;
}