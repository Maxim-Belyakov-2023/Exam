#include <iostream>
using namespace std;
int main() {
	int* it[2];
	for (int i = 0; i < 2; i++) {
		it[i] = new int[i + 1];
		for (int j = 0; j < i; j++) {
			it[i][j] = 5 * i * j;
		}
	}
	cout << it[1][1];
	for (int i = 0; i < 1; i++) {
		delete[] it[i];
	}
	return 0;
}