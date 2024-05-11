#include <iostream>
#include <Windows.h>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(0));
    int num = rand() % 500 + 1;

    int choice;
    cout << "0 - закінчити програму\n1 - згенерувати нове число\n2 - вгадати число" << endl;
    cin >> choice;

    high_resolution_clock::time_point start_time, end_time;
    int a = 0;

    switch (choice) {
    case 0:
        return 0;
    case 1:
        num = rand() % 500 + 1;
        cout << "Нове число згенеровано." << endl;
    case 2:
        cout << "Вгадайте число від 1 до 500." << endl;
        start_time = high_resolution_clock::now();
        for (; ; a++) {
            int guess;
            cin >> guess;

            if (guess > num) {
                cout << "Загадане число менше." << endl;
            }
            else if (guess < num) {
                cout << "Загадане число більше." << endl;
            }
            else {
                cout << "Ви вгадали!" << endl;
                end_time = high_resolution_clock::now();
                break;
            }
        }
        duration<double> elapsed_time = duration_cast<duration<double>>(end_time - start_time);
        cout << "Ви вгадали число за " << a << " спроб. Час: " << elapsed_time.count() << " секунд." << endl;
        break;
    default:
        cout << "Невірний вибір." << endl;
        break;
    }

    return 0;
}
