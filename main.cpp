#include<iostream>
#include<windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "¬вед≥ть число: " << endl;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        cout << i << endl;
    }   
    return 0;
}

     