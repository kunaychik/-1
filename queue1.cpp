#include "queue1.h"

float queue1::HarmonicMean() {
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

