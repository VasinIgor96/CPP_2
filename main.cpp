#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(nullptr));

    int numToGuess = rand() % 500 + 1; 
    int numAttempts = 0; 

    cout << "Гра \"Вгадай число\". Відгадайте число від 1 до 500. Для виходу введіть 0.\n";

    while (true) {
        int guess;
        cout << "Спроба #" << ++numAttempts << ": ";
        cin >> guess;

        if (guess == 0) {
            cout << "Гру перервано.\n";
            break;
        }
        else if (guess == numToGuess) {
            cout << "Вітаємо! Ви вгадали число " << numToGuess << " за " << numAttempts << " спроб.\n";
            break;
        }
        else if (guess < numToGuess) {
            cout << "Загадане число більше, ніж ви ввели.\n";
        }
        else {
            cout << "Загадане число менше, ніж ви ввели.\n";
        }
    }

    return 0;
}
