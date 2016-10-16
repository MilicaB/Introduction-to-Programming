#include<iostream>
using namespace std;

int main() {
	double x, y;
	cout << "Enter x coordinate: " << endl;
	// cout << "Enter x coordinate: \n"; the same as the endl
	cin >> x;
	cout << "Enter y coordinate: " << endl;
	cin >> y;
	bool isIn = (x >= 1 && x <= 4 && y >= 1 && y <= 4 && !(x > 2 && x < 3 && y > 2 && y < 3));
	if (isIn) { //If isIn is true
		cout << "The point is in the area" << endl;
	}
	else {
		cout << "The point is NOT in the area" << endl;
	}
	return 0;
}