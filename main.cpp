#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "������ ����� ���� ��������: ";
    cin >> a;
    cout << "������ ����� ���� ��������: ";
    cin >> b;

    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

  
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << "���� ����� � �������� [" << a << ", " << b << "]: " << sum;

    return 0;
}
