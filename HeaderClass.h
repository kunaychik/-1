#include <iostream>
#ifndef HeaderClass
#define HeaderClass

struct unit {
	int value;
	unit* next;
};

class queue {
public:
	queue();
	unit** copyQ();
	void showQ();
	void push(int num);
	int pop();
	bool isEmpty();
	void setBothPtr(unit** ptr);
	unit* getFirstPtr();
	unit* getLastPtr();

protected:
	unit* addElem(unit* elem, int num);
	unit* init(int num);

private:
	unit* first_;
	unit* last_;
};


unit** mergeQ (queue q1, queue q2);
#endif
