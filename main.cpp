#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count = 0;
	for (int i = 100; i <= 999; i++) {
		int sot = i / 100;
		int des = (i / 10) % 10;
		int odun = i % 10;

		if (sot == des || sot == odun || des == odun) {
			count++;
		}
	}
	cout << count;
	return 0;
}