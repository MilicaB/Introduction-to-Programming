#include<iostream>
#include<cmath>
using namespace std;

//int main2() {
	int number;
	cout << "Enter number: ";
	cin >> number;

	bool isPrime = true;

	for (int i = 2; (i <= sqrt(number)) && isPrime; i++) {
		if (number % i == 0) isPrime = false;
	}

	if (isPrime) cout << "The number you entered is prime." << endl;
	else cout << "The number you entered is not prime." << endl;
	return 0;
}