#include <iostream>
#include <string>
#include <thread>
using namespace std;

void input(string* str) {
    cout << "\nInput Thread State: Running\n";
    cout << "\nEnter String: ";
    try {
    	getline(cin, *str);
    } catch (...) {
    	cout << "\nSomething went wrong while trying to take input from user" << endl;
    	exit(-1);
    }
}

void reverse(string str) {
    cout << "\n\nReverse Thread State: Running\n";
    int lengthOfString = str.length();
    cout << "\nReversed String: ";
    for (int i = lengthOfString - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

void capital(string str) {
    cout << "\n\nCapital Thread State: Running\n";
    int lengthOfString = str.length();
    cout << "\nCapitalized String: ";
    try {
	    for (int i = 0; i < lengthOfString; i++) {
		cout << char(toupper(str[i]));
	    }
    } catch(...) {
    	cout << "Something went wrong while capitalizing string" << endl;
    	return;
    }
    cout << endl;
}

void shift(string str) {
    cout << "\n\nShift Thread State: Running\n";
    int lengthOfString = str.length();
    cout << "\nShifted String: ";
    try {
		for (int i = 0; i < lengthOfString; i++) {
		    cout << char(str[i] + 2);
		}
    } catch(...) {
    	cout << "Something went wrong while shifting string" << endl;
    	return;
    }
    cout << endl;
}

int main() {
    string str;
    
    try {
		thread inputThread(input, &str);
		inputThread.join();
    } catch(...) {
    	cout << "Something went wrong while creating input thread" << endl;
    }
    cout << "\nInput Thread State: Terminated\n";

    thread reverseThread(reverse, str), 
        capitalThread(capital, str),
        shiftThread(shift, str);

    reverseThread.join();
    cout << "\nReverse Thread State: Terminated\n";
    capitalThread.join();
    cout << "\nCapital Thread State: Terminated\n";
    shiftThread.join();
    cout << "\nShift Thread State: Terminated\n";
}
