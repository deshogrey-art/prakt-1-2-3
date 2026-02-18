#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Введите число для поиска делителей: ";
    cin >> number;

    cout << "Делители числа " << number << ": ";
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
