#include "queue3.h"

unit** queue3::copyQ() {
	return queue::copyQ();
}

void queue3::showQ() {
	queue::showQ();
}
void queue3::push(int num) {
	queue::push(num);
}

int queue3::pop() {
	return queue::pop();
}

bool queue3::isEmpty() {
	return queue::isEmpty();
}
void queue3::setBothPtr(unit** ptr) {
	queue::setBothPtr(ptr);
}

float queue3::HarmonicMean() {
	int n = 0;
	float sum = 0.0;
	float a = 0.0;
	float k = 0.0;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		a = 1.0 / (i->value);
		sum = sum + a;
		n++;
		a = 0;
	}
	k = n / sum;
	return k;
}

unit* queue3::getFirstPtr() {
	return queue::getFirstPtr();
}

unit* queue3::getLastPtr() {
	return queue::getLastPtr();
}

unit** mergeQ(queue3 q1, queue3 q2) {
	queue3* q = new queue3[1];

	for (unit* i = q1.getFirstPtr(); i != nullptr; i = i->next) {
		q->push(i->value);
	}
	for (unit* i = q2.getFirstPtr(); i != nullptr; i = i->next) {
		q->push(i->value);
	}
	unit** k = new unit * [2];
	k[0] = q->getFirstPtr();
	k[1] = q->getLastPtr();
	delete[] q;
	return k;
}