#include "life.h"


#ifndef BOX_H
#define BOX_H

class Box : public Life {
public:
	Box(int r, int c);
	~Box();
};

#endif //BOX_H