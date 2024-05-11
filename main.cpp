#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A;
    cout << "Введіть ціле число A: ";
    cin >> A;

    int suma = 0;

    for (int temp = A; temp != 0; temp /= 10) {
        suma += temp % 10;
    }

    int sum = 0;

    for (int i = 0; i < 3; i++) {
        sum += suma * suma * suma;
    }

    if (sum == A * A) {
        cout << "Куб суми цифр цього числа дорівнює A * A." << endl;
    }
    else {
        cout << "Куб суми цифр цього числа не дорівнює A * A." << endl;
    }

    return 0;
}
