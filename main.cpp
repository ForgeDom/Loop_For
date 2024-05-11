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
    cout << "0 - �������� ��������\n1 - ����������� ���� �����\n2 - ������� �����" << endl;
    cin >> choice;

    high_resolution_clock::time_point start_time, end_time;
    int a = 0;

    switch (choice) {
    case 0:
        return 0;
    case 1:
        num = rand() % 500 + 1;
        cout << "���� ����� �����������." << endl;
    case 2:
        cout << "�������� ����� �� 1 �� 500." << endl;
        start_time = high_resolution_clock::now();
        for (; ; a++) {
            int guess;
            cin >> guess;

            if (guess > num) {
                cout << "�������� ����� �����." << endl;
            }
            else if (guess < num) {
                cout << "�������� ����� �����." << endl;
            }
            else {
                cout << "�� �������!" << endl;
                end_time = high_resolution_clock::now();
                break;
            }
        }
        duration<double> elapsed_time = duration_cast<duration<double>>(end_time - start_time);
        cout << "�� ������� ����� �� " << a << " �����. ���: " << elapsed_time.count() << " ������." << endl;
        break;
    default:
        cout << "������� ����." << endl;
        break;
    }

    return 0;
}
