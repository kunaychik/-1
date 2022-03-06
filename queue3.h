#include "HeaderClass.h"
#ifndef QUEUE3_H
#define QUEUE3_H

class queue3 : private queue {
public:
	queue3() : queue() {};
	float HarmonicMean();
	unit** copyQ();
	void showQ();
	void push(int num);
	int pop();
	bool isEmpty();//+
	void setBothPtr(unit** ptr);
	unit* getFirstPtr();
	unit* getLastPtr();
};

unit** mergeQ(queue3 q1, queue3 q2);
#endif // !QUEUE3_H