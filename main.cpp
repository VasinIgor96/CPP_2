#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "������ ����� ����� ��������: ";
    cin >> a;
    cout << "������ ������ ����� ��������: ";
    cin >> b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << "\n�� ����� � ��������: ";
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }

    cout << "\n���� ����� � ��������: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\n������ ����� � ��������: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << "\n�����, ����� 7: ";
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}

