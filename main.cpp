#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sum = 0;
    int num;

    do {
        cout << "������ �����: ";
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "���� �������� �����: " << sum;

    return 0;
}
