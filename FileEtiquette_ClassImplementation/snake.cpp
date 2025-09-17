#include "snake.h"
#include "global.h"

Snake::Snake(int r, int c) {
	col = c;
	row = r;
	height = SNAKE_SIZE;
	width = SNAKE_SIZE;

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
	sprite[0][0] = ALIVE;
	sprite[1][0] = ALIVE;
	sprite[1][1] = ALIVE;
	sprite[0][2] = ALIVE;
	sprite[0][3] = ALIVE;
	sprite[1][3] = ALIVE;
}

Snake::~Snake() {
	for (int i = 0; i < height; i++) {
		delete[] sprite[i];
	}
	delete[] sprite;
}