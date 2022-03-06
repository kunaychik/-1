#include "HeaderClass.h"
#ifndef QUEUE2_H
#define QUEUE2_H

class queue2 : protected queue {
public:
	queue2() : queue() {};
	float HarmonicMean();
	unit** copyQ();
	void showQ();
	void push(int num);
	int pop();
	bool isEmpty();
	void setBothPtr(unit** ptr);
	unit* getFirstPtr();
	unit* getLastPtr();
};

unit** mergeQ (queue2 q1, queue2 q2);
#endif // !QUEUE2_H#pragma once
