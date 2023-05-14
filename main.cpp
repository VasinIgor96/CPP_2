#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "Введіть перше число діапазону: ";
    cin >> a;
    cout << "Введіть останнє число діапазону: ";
    cin >> b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << "\nУсі числа з діапазону: ";
    for (int i = a; i <= b; i++) {
        cout << i << " ";
    }

    cout << "\nПарні числа з діапазону: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << "\nНепарні числа з діапазону: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << "\nЧисла, кратні 7: ";
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}

