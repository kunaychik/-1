#include "queue1.h"
#include "queue2.h"
#include "queue3.h"
using namespace std;

template <typename T>
int Queue(short var) {
	int choice;
	T q1, q2;
	do {
		switch (var)
		{
		case 1:
			cout << "Public" << endl;
			break;
		case 2:
			cout << "Protected" << endl;
			break;
		case 3:
			cout << "Private" << endl;
			break;
		default:
			break;
		}
		cout << "Select action:" << endl << "1. Push" << endl << "2. Pop" << endl << "3. Show" << endl << "4. HarmonicMean" << endl << "5. Copy" << endl << "6. Merge" << endl << "7. Exit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter value to push: ";
			cin >> choice;
			q1.push(choice);
			break;
		case 2:
			cout << "Value: " << q1.pop() << endl;
			break;
		case 3:
			cout << "Queue: " << endl;
			q1.showQ();
			break;
		case 4:
			cout << "HarmonicMean: " << q1.HarmonicMean() << endl;
			break;
		case 5:
			cout << "Copy" << endl;
			q2.setBothPtr(q1.copyQ());
			break;
		case 6:
			break;
		default:
			return 0;
			break;
		}
	} while (true);
}

int main() {
	short choice;
	cout << "1. Public" << endl << "2. Protected" << endl << "3. Private" << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		return Queue<queue1>(choice);
		break;
	case 2:
		return Queue<queue2>(choice);
		break;
	case 3:
		return Queue<queue3>(choice);
		break;
	default:
		cout << "NO" << endl;
		return 0;
	}
	return 0;
}
