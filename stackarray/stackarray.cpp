#include <iostream>
#include <string>

using namespace std;

class Program {
private:
	string stack_array[5];
	int top;

public:
	Program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}

		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << "ditambahkan (pushed)." << endl;

		return element;
	}


	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			return;
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);
	}
