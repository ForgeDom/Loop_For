#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int v;
    int choise, sec_choise, third_choise;
    cout << "1 - Ввести суму;\n2 - Обрати у яку валюту конвертувати\n3 - Завершити роботу" << endl;
    cin >> choise;
    switch (choise) {
        case 1: {
            cout << "Введіть суму:" << endl;
            cin >> v;
        }
        case 2: {
            cout << "Початкова валюта:\n1 - Гривні\n2 - Долари\n3 - Євро" << endl;
            cin >> sec_choise;
            switch (sec_choise) {
            case 1: {
                cout << "Гривні перевести в:\n 1 - Долари \n 2 - Євро" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double grn_dol = v / 39.58;
                    cout << grn_dol << " доларів" << endl;
                }
                break;
                case 2: {
                    double grn_eur = v / 42.27;
                    cout << grn_eur << " євро" << endl;
                }
                break;
                default:
                    cout << "Невірний вибір." << endl;
                    break;
                }
            }
                break;
            case 2: {
                cout << "Долари перевести в:\n 1 - Гривні \n 2 - Євро" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double dol_grn = v * 39.58;
                    cout << dol_grn << " Гривень" << endl;
                }
                      break;
                case 2: {
                    double dol_eur = v * 0.92;
                    cout << dol_eur << " євро" << endl;
                }

                      break;
                default: {
                    cout << "Невірний вибір." << endl;
                }

                       break;
                }
                break;
            }
                
            case 3:
                cout << "Євро перевести в:\n 1 - Гривні \n 2 - Долари" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double eur_grn = v * 42.27;
                    cout << eur_grn << " Гривень" << endl;
                }
                break;
                case 2: {
                    double eur_dol = v * 1.08;
                    cout << eur_dol << " євро" << endl;
                }
                break;
                default:
                    cout << "Невірний вибір." << endl;
                    break;
                }
                break;
            default:
                cout << "Невірний вибір." << endl;
                break;
            }
            break;

        case 3:
            cout << "Завершення роботи." << endl;
            break;
        default:
            cout << "Невірний вибір." << endl;
            break;
        }
    }
    return 0;
    }
