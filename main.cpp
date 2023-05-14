#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    cout << "¬вед≥ть першу межу д≥апазону: ";
    cin >> a;
    cout << "¬вед≥ть другу межу д≥апазону: ";
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

    cout << "—ума чисел з д≥апазону [" << a << ", " << b << "]: " << sum;

    return 0;
}
