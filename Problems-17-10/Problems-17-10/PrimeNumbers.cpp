#include<iostream>
#include<cmath>
using namespace std;

//int main() {
	int a, b;
	cout << "Enter beginning of the interval: ";
	cin >> a;
	cout << "Enter end of the interval: ";
	cin >> b;

	bool isPrime;

	for (int number = a; number <= b; number++) {
		isPrime = true;
		for (int i = 2; (i <= sqrt(number)) && isPrime; i++) {
			if (number % i == 0) isPrime = false;
		}

		/*
			for (int i = 2; i <= sqrt(number); i++) {
				if (number % i == 0) {
					isPrime = false;
					break;// Калин не обича break
				}
			}
		*/
		if (isPrime) cout << number << ", ";
	}

	return 0;
}