
class Life;
class Matrix;


#ifndef SIMULATION_H
#define SIMULATION_H

class Simulation {
public:
	Simulation(Life** life, int numLife);
	~Simulation();

	void simulate();
	void report();
	void one(int t);

private:
	void delay(int ms) const;

	int		watchme;
	Matrix* matrix;
	int		steps;
	bool	automate;
};

#endif //SIMULATION_H