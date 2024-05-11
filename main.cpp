#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cin >> a;
	for (int i = a; i <= 1000; i++) {
		if (i % a == 0) {
			cout << i << endl;
		}
	}
	return 0;
}