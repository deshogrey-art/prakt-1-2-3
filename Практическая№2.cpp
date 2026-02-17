#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int choice;

    do {
        cout << "\n1 - Играть\n0 - Выход\nВыбор: ";
        cin >> choice;

        if (choice == 1) {
            int r = rand() % 101, x;
            cout << "Я загадал число от 0 до 100.\n";
            while (true) {
                cout << "Введите число: ";
                cin >> x;
                if (x > r) cout << "Меньше!\n";
                else if (x < r) cout << "Больше!\n";
                else { cout << "Вы угадали!\n"; break; }
            }
        }

    } while (choice != 0);

    return 0;
}
