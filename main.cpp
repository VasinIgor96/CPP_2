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
        cout << "¬вед≥ть число: ";
        cin >> num;
        sum += num;
    } while (num != 0);

    cout << "—ума введених чисел: " << sum;

    return 0;
}
