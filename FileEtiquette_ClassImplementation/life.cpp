#include "life.h"


int Life::getCol() const {
	return col;
}
int Life::getRow() const {
	return row;
}
int Life::getHeight() const {
	return height;
}
int Life::getWidth() const {
	return width;
}
char Life::getFigure(int r, int c) const {
	return sprite[r][c];
}
void Life::inMatrix(Matrix* m) {
	matrix = m;
}
void Life::inSimulation(Simulation* s) {
	simulation = s;
}
bool Life::areWeInASimulation() {
	return simulation != nullptr;
}