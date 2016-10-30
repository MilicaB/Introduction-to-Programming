#include<iostream>
using namespace std;

//int main1() {
	int number, br=1, counter=0;
	int k;

	cout << "input nummber: ";
	cin >> number;
	cout << "input k: ";
	cin >> k;

	int numberCopy = number;

	for (int i = numberCopy; i; i = numberCopy /= k)
	{
		counter++;
	}
	cout << "couter is: " << counter<<endl;
	int mas[10000];

	cout << "----------------------- using for -----------------------\n";
	for (int numberCopy2 = number; numberCopy2; numberCopy2 /= k) {
		cout << numberCopy2%k << endl;
		mas[counter-br] = numberCopy2 % k;
		br++;
	}

	for (int i = 0; i<counter ; i++)
	{
		cout << "mas [" << i << "] = " << mas[i] << endl;
	}

	cout << "----------------------- using while -----------------------\n";
	while (numberCopy) {
		cout << numberCopy%k << endl;
		numberCopy /= k;
	}
	return 0;
}