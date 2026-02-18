#include <iostream>
#include <iomanip> // Для setw

using namespace std;

int main() {
    const int SIZE = 9; // Размер таблицы

    cout << "Таблица умножения:\n\n";

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            cout << setw(4) << i * j; // Выравнивание столбцов
        }
        cout << endl;
    }

    return 0;
}
