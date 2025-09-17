#include "life.h"

#ifndef BOAT_H
#define BOAT_H

class Boat : public Life {
public:
	Boat(int r, int c);
	~Boat();
};

#endif //BOAT_H