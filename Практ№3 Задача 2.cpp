#include <iostream>

int main() {
    int number;
    std::cout << "Введите число для поиска делителей: ";
    std::cin >> number;

    std::cout << "Делители числа " << number << ": ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
