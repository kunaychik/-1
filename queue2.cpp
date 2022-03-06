#include "queue2.h"

unit** queue2::copyQ() {
	return queue::copyQ();
}

void queue2::showQ() {
	queue::showQ();
}
void queue2::push(int num) {
	queue::push(num);
}

int queue2::pop() {
	return queue::pop();
}

bool queue2::isEmpty() {
	return queue::isEmpty();
}
void queue2::setBothPtr(unit** ptr) {
	queue::setBothPtr(ptr);
}

float queue2::HarmonicMean() {
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

unit* queue2::getFirstPtr() {
	return queue::getFirstPtr();
}

unit* queue2::getLastPtr() {
	return queue::getLastPtr();
}
unit** mergeQ(queue2 q1, queue2 q2) {
	queue2* q = new queue2[1];

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