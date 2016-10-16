#include<iostream>
#include<math.h>
using namespace std;

int main2() {
	//int n;
	//cout << "Enter 5 digit number" << endl;
	//cin >> n;
	//int k = n / pow(10, 4); // k = 10 ^ 4 pow(10, 4) = 10000
	//int firstDigit = k % 10; // CODE DUPLICATION!!!! 
	//k = n / pow(10, 0); // i and k determining the matching numbers
	//int lastDigit = k % 10;
	//k = n / pow(10, 3);
	//int secondDigit = k % 10;
	//k = n / pow(10, 1);
	//int fourthDigit = k % 10;
	//bool firstAndLastMatch = firstDigit == lastDigit;
	//bool secondAndFourthMatch = secondDigit == fourthDigit;

	//cout << "The number is ";
	//if (!(firstAndLastMatch && secondAndFourthMatch)) {
	//	cout << "NOT ";
	//}
	//cout << "palindrome\n";


	int n, digit1, digit2, digit3;

	cout << "Write a number with 3 digits" << endl;
	cin >> n;
	cout << "My number is " << n << endl;
	digit1 = n / 100;
	cout << "The first digit is " << digit1 << endl;
	digit2 = (n / 10) % 10;
	cout << "The second digit is " << digit2 << endl;
	digit3 = (n % 10);
	cout << "The thirth digit is " << digit3 << endl;
	return 0;


}