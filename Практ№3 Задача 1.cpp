#include <iostream>
#include <iomanip> // Для std::setw

int main() {
    const int SIZE = 9; // Размер таблицы

    std::cout << "Таблица умножения:\n\n";

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            std::cout << std::setw(4) << i * j; // Выравнивание столбцов
        }
        std::cout << std::endl;
    }

    return 0;
}