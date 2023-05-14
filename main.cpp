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
        
        cout << "Меню конвертера валют:" << endl;
        cout << "1. Конвертувати USD до UAH" << endl;
        cout << "2. Конвертувати EUR до UAH" << endl;
        cout << "0. Вихід" << endl;
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1: 
            cout << "Введіть суму в USD: ";
            cin >> amount;
            cout << amount << " USD = " << amount * usd_to_uah << " UAH" << endl;
            break;
        case 2: 
            cout << "Введіть суму в EUR: ";
            cin >> amount;
            cout << amount << " EUR = " << amount * eur_to_uah << " UAH" << endl;
            break;
        case 0: 
            cout << "До побачення!" << endl;
            break;
        default: 
            cout << "Невідома опція меню. Спробуйте ще раз." << endl;
            break;
        }
    } while (choice != 0); 

    return 0;
}
