#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int num;
    cout << "¬вед≥ть число: ";
    cin >> num;

    int res = 0;
    int multiplier = 1;

    for (; num != 0; num /= 10) {
        int digit = num % 10;
        if (digit != 3 && digit != 6) {
            res += digit * multiplier;
            multiplier *= 10;
        }
    }
    if (res == 0) {
        return 0;
    }
    else {
        cout << res << endl;
    }

	return 0;	
}