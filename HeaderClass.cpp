#include "HeaderClass.h"

unit** mergeQ(queue q1, queue q2) {
	queue* q = new queue[1];

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

unit** queue::copyQ() {
	queue* q = new queue[1];

	for (unit* i = first_; i != nullptr; i = i->next)
		q->push(i->value);

	unit** k = new unit * [2];
	k[0] = q->getFirstPtr();
	k[1] = q->getLastPtr();
	delete[] q;
	return k;
}

void queue::setBothPtr(unit** ptr) {
	first_ = ptr[0];
	last_ = ptr[1];
}

unit* queue::getFirstPtr() {
	return first_;
}
unit* queue::getLastPtr() {
	return last_;
}

void queue::showQ() {
	for (unit* i = first_; i != nullptr; i = i->next) {
		std::cout << i->value << "\t";
	}
	std::cout << std::endl;
}

int queue::pop() {
	unit* temp;
	int x;
	x = first_->value;
	temp = first_;
	first_ = first_->next;
	delete[] temp;
	return x;
}
void queue::push(int num) {
	if (isEmpty()) {
		last_ = init(num);
		first_ = last_;
	}
	else {
		last_ = addElem(last_, num);
	}
}
bool queue::isEmpty() {
	return first_ == nullptr ? true : false;
}

unit* queue::addElem(unit* elem, int num) {
	unit* temp = new unit[1];
	elem->next = temp;
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

unit* queue::init(int num) {
	unit* temp = new unit[1];
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

queue::queue() {
	first_ = nullptr;
	last_ = nullptr;
}