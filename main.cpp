#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int v;
    int choise, sec_choise, third_choise;
    cout << "1 - ������ ����;\n2 - ������ � ��� ������ ������������\n3 - ��������� ������" << endl;
    cin >> choise;
    switch (choise) {
        case 1: {
            cout << "������ ����:" << endl;
            cin >> v;
        }
        case 2: {
            cout << "��������� ������:\n1 - �����\n2 - ������\n3 - ����" << endl;
            cin >> sec_choise;
            switch (sec_choise) {
            case 1: {
                cout << "����� ��������� �:\n 1 - ������ \n 2 - ����" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double grn_dol = v / 39.58;
                    cout << grn_dol << " ������" << endl;
                }
                break;
                case 2: {
                    double grn_eur = v / 42.27;
                    cout << grn_eur << " ����" << endl;
                }
                break;
                default:
                    cout << "������� ����." << endl;
                    break;
                }
            }
                break;
            case 2: {
                cout << "������ ��������� �:\n 1 - ����� \n 2 - ����" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double dol_grn = v * 39.58;
                    cout << dol_grn << " �������" << endl;
                }
                      break;
                case 2: {
                    double dol_eur = v * 0.92;
                    cout << dol_eur << " ����" << endl;
                }

                      break;
                default: {
                    cout << "������� ����." << endl;
                }

                       break;
                }
                break;
            }
                
            case 3:
                cout << "���� ��������� �:\n 1 - ����� \n 2 - ������" << endl;
                cin >> third_choise;
                switch (third_choise) {
                case 1: {
                    double eur_grn = v * 42.27;
                    cout << eur_grn << " �������" << endl;
                }
                break;
                case 2: {
                    double eur_dol = v * 1.08;
                    cout << eur_dol << " ����" << endl;
                }
                break;
                default:
                    cout << "������� ����." << endl;
                    break;
                }
                break;
            default:
                cout << "������� ����." << endl;
                break;
            }
            break;

        case 3:
            cout << "���������� ������." << endl;
            break;
        default:
            cout << "������� ����." << endl;
            break;
        }
    }
    return 0;
    }
