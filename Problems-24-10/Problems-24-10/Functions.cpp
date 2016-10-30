#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int);
int sum(int, int);
double sum(double, double);

int main() {
	int number;
	cout << "Enter number: \n";
	cin >> number;
	cout << "The number entered is ";
	if (isPrime(number)) {
		cout << "NOT ";
	}
	cout << "prime\n";
   
	cout << "1 + 5 = " << sum(1, 5) << endl;
	cout << "1.5 + 5.5 = " << sum(1.5, 5.5) << endl;
	
	return 0;
}
bool isPrime(int number) {
	bool isPrime = true;
	for (int i = 2; i <= sqrt(number); i++) {
		if (!number%i) {
			isPrime = false;
		}
	}
	return isPrime;
}

int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
