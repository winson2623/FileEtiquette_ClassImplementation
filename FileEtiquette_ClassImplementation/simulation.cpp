#include <chrono>
#include <thread>
#include <string>
#include <iostream>

#include "simulation.h"
#include "life.h"
#include "matrix.h"
#include "global.h"


Simulation::Simulation(Life** life, int numLife) {
	watchme = 1;
	steps = 0;
	automate = false;
	matrix = new Matrix();

	if (life != nullptr) {
		for (int i = 0; i < numLife; i++) {
			if (life[i] != nullptr) {
				bool success = matrix->initState(life[i]);
				if (!success) {
					std::cout << "Failed to add life to the matrix" << std::endl;
				}
			}
		}
	}
}

Simulation::~Simulation() {
	delete matrix;
}

void Simulation::simulate() {
	while (true) {
		matrix->render();

		if (!automate) {
			std::cout << "command (<space> to step, <a> to automate, <q> to quit): ";

			std::string action;
			std::getline(std::cin, action);

			switch (action[0])
			{

			default:
				std::cout << '\a' << std::endl;  // beep
				continue;
			case 'q':
				std::cout << "Quitting Game." << std::endl;
				return;
			case 's':

				continue;
			case ' ':

				break;
			case 'a':
				automate = true;
				break;
			}
		}
		else {
			if (steps >= MAX_STEPS) {
				std::cout << "Reached max steps, quitting." << std::endl;
				return;
			}
			delay(300);
		}
		steps++;
		matrix->computeNextState();
	}
}

void Simulation::report() {
	std::string msg = "never goin to give you up"; // Replace Hello World with your answer.
	std::cout << msg << std::endl;
}
int two(int u) {
	return (u << 2) % 10;
}
int three(int x) {
	if (x % 2 == 0)
		return 5;
	else
		return 3;
}

void Simulation::one(int t) {
	int i = 0;
	int k = watchme;	//the code is 52871 and outputted "never goin to give you up"
	while (++i < t) {
		if (i == 0)
			k = 2;
		else if (i == 1)
			k = 7;
		else if (i == 4)
			k = 8;
		else if (i == 5)
			k = 5;
		else
			k = two(watchme);
		watchme = k;
	}
	k = three(watchme);
	watchme = k;
}

//Private member functions
void Simulation::delay(int ms) const {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}