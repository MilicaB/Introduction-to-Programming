#include<iostream>
using namespace std;

const int MAX_N=100;
const int MAX_M=100;

//void enterMatrix(int **matrix, int m, int n)
void enterMatrix(int matrix[][MAX_M],
	int m, int n) {
	cout << "Enter matrix elements: " << endl;
	if(m>MAX_M){
		cout << "M is bigger than the max size of the array. Defaults to MAX_M!";
		m = MAX_M;
	}
	if (n>MAX_N) {
		cout << "N is bigger than the max size of the array. Defaults to MAX_M!";
		n = MAX_N;
	}
	for (int i = 0; i < m; i++) { //редове
		for (int j = 0; j < n; j++) {//колони
			cin >> matrix[i][j];
		}
	}
}

void print(int matrix[][MAX_M],
	int m, int n) {
	for (int i = 0; i < m; i++) { //редове
		for (int j = 0; j < n; j++) {//колони
			cout << matrix[i][j];
			if (j == n - 1) {
				 cout<< "\n";
			}
			else {
				cout << "\t";
			}
		}
		cout << "\n";
	}
}

void sum(int matrix[][MAX_M],
	int m, int n, int matrix2[][MAX_M],
	int m2, int n2) {
	if (m != m2 || n != n2) {
		cout << "Unable to sum 2 matrices with different dimentions." << endl;
		return;
	}
	int result[MAX_M][MAX_N];
	for (int i = 0; i < m; i++) { //редове
		for (int j = 0; j < n; j++) {//колони
			result[i][j]= matrix[i][j] + matrix2[i][j];
		}
	}
	cout << "Sum of the two matrices: \n";
	print(result, m, n);
}

void transpose(int matrix[][MAX_M],
	int m, int n) {
	int result[MAX_M][MAX_N];
	for (int i = 0; i < n; i++) { //редове
		for (int j = 0; j < m; j++) {//колони
			result[i][j] = matrix[j][i];
		}
	}
	cout << "Transposed matrix: \n";
	print(result, n, m);
}

void mult(int matrix[][MAX_M],
	int m, int n, int matrix2[][MAX_M],
	int m2, int n2) {
	if (n != m2) {
		cout << "Unable to multiply the two matrices" << endl;
		return;
	}
	int result[MAX_M][MAX_N];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n2; j++) {
			int sum = 0;
			for (int s = 0; s < n; s++) {
				sum += matrix[i][s] * matrix2[s][j];
			}
			result[i][j] = sum;
		}
	}
	cout << "Multiplication result: \n";
	print(result, m, n2);
}
int main() {
	int matrix1[MAX_M][MAX_N], matrix2[MAX_M][MAX_N];
	int m1, n1, m2, n2;
	cout << "Enter size of the matrix: " << endl;
	cin >> m1 >> n1;
	cout << "Enter size of the matrix: " << endl;
	cin >> m2 >> n2;

	enterMatrix(matrix1, m1, n1);
	enterMatrix(matrix2, m2, n2);

	transpose(matrix1, m1, n1);
	sum(matrix1, m1, n1, matrix2, m2, n2);
	mult(matrix1, m1, n1, matrix2, m2, n2);
}