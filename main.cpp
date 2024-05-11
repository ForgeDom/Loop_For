#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int A;
    cout << "¬вед≥ть число: ";
    cin >> A;

    for (int B = 1; B * B <= A; B++) {
        if (A % (B * B) == 0) {
            if (A % (B * B * B) != 0) {
                cout << B << endl;
            }
        }
    }
	return 0;
}