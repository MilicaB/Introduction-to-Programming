#include<iostream>
using namespace std;

int main() {
	int number;

	cout << "Enter a number:\n";
	cin >> number;

	int digitCount = 0; //� ���� ���������� �� ������� ���� ����� �� ������� ����� ��� ������
	int numCopy = number;//������ �� ����� �� �������, ��� ���� �� �� ������������ � ������ �� ������� ������������
	do {
		digitCount++; // ����� ��� ������ ������ � ������ => ����������� 1 �����
		numCopy /= 10; // ���������� ���������� ����� �� ������� 1234/10=123
	} while (numCopy); // ����� ������ ������� �� 0, a�� ������� � 0 ��� ���� ������ �� ���������
	                   // ���� ������ ������ �� ������ �������� ��������
	cout << number << " has " << digitCount << " digits.\n";
	return 0;
}