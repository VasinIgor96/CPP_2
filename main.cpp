#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double usd_to_uah = 36.82; 
    double eur_to_uah = 40.27; 
    double amount; 
    int choice; 

    do {
        
        cout << "���� ���������� �����:" << endl;
        cout << "1. ������������ USD �� UAH" << endl;
        cout << "2. ������������ EUR �� UAH" << endl;
        cout << "0. �����" << endl;
        cout << "��� ����: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            cout << "������ ���� � USD: ";
            cin >> amount;
            cout << amount << " USD = " << amount * usd_to_uah << " UAH" << endl;
            break;
        case 2: 
            cout << "������ ���� � EUR: ";
            cin >> amount;
            cout << amount << " EUR = " << amount * eur_to_uah << " UAH" << endl;
            break;
        case 0: 
            cout << "�� ���������!" << endl;
            break;
        default: 
            cout << "������� ����� ����. ��������� �� ���." << endl;
            break;
        }
    } while (choice != 0); 

    return 0;
}
