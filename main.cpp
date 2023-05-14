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

    cout << "��� \"������ �����\". ³�������� ����� �� 1 �� 500. ��� ������ ������ 0.\n";

    while (true) {
        int guess;
        cout << "������ #" << ++numAttempts << ": ";
        cin >> guess;

        if (guess == 0) {
            cout << "��� ���������.\n";
            break;
        }
        else if (guess == numToGuess) {
            cout << "³����! �� ������� ����� " << numToGuess << " �� " << numAttempts << " �����.\n";
            break;
        }
        else if (guess < numToGuess) {
            cout << "�������� ����� �����, �� �� �����.\n";
        }
        else {
            cout << "�������� ����� �����, �� �� �����.\n";
        }
    }

    return 0;
}
