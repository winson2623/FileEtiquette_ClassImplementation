

#ifndef MATRIX_H
#define MATRIX_H

class Life;
class Matrix {
public:
	Matrix();
	~Matrix();

	void render() const;
	void computeNextState();
	bool initState(Life* life);

private:

	void clearScreen() const;
	char nextState(char state, char row, char col, bool toggle) const;

	// The rules of Conway's Simulation of Life requires each cell to
	// examine it's neighbors.  So, we have to check the entire matrix
	// first before we change it.  We can use two copies of the matrix, 
	// one to check the current state (current day) then another to generate 
	// the next state(for the next day). We can toggle between them each 
	// step, to avoid having to copy between matrix each step (day) of the game.
	char** grid_1;
	char** grid_2;
	bool	toggle;
};


#endif //MATRIX_H