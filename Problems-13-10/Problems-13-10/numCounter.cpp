#include<iostream>
using namespace std;

int main() {
	int number;

	cout << "Enter a number:\n";
	cin >> number;

	int digitCount = 0; //в тази променлива ще запазим броя цифри на числото което сме въвели
	int numCopy = number;//правим си копие на числото, тъй като ще го раздробяваме и искаме да запазим оригиналното
	do {
		digitCount++; // всеки път когато влезем в цикъла => преброяваме 1 цифра
		numCopy /= 10; // премахваме последната цифра от числото 1234/10=123
	} while (numCopy); // броим докато стигнем до 0, aко числото е 0 тъй като цикъла се изпълнява
	                   // поне веднъж отново ще изведе коректен резултат
	cout << number << " has " << digitCount << " digits.\n";
	return 0;
}