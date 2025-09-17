#ifndef LIFE_H
#define LIFE_H

class Matrix;
class Simulation;
class Life {
public:
	int getCol() const;
	int getRow() const;
	int getHeight() const;
	int getWidth() const;
	char getFigure(int r, int c) const;
	void inMatrix(Matrix* m);
	void inSimulation(Simulation* s);
	bool areWeInASimulation();

protected:
	int col;
	int row;
	int height;
	int width;
	char** sprite;
	Matrix* matrix;
	Simulation* simulation;
};

#endif //LIFE_H