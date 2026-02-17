#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double a, b;
    int n;

    while (true) {

        cout << "\n=== КАЛЬКУЛЯТОР ===\n";
        cout << "1 - Сложение\n";
        cout << "2 - Вычитание\n";
        cout << "3 - Умножение\n";
        cout << "4 - Деление\n";
        cout << "5 - Степень\n";
        cout << "6 - Корень\n";
        cout << "7 - 1 процент\n";
        cout << "8 - Факториал\n";
        cout << "9 - Выход\n";
        cout << "Выбор: ";

        cin >> choice;

        if (choice == 1) {
            cin >> a >> b;
            cout << a + b << endl;
        }

        else if (choice == 2) {
            cin >> a >> b;
            cout << a - b << endl;
        }

        else if (choice == 3) {
            cin >> a >> b;
            cout << a * b << endl;
        }

        else if (choice == 4) {
            cin >> a >> b;
            cout << a / b << endl;
        }

        else if (choice == 5) {
            cin >> a >> n;
            cout << pow(a, n) << endl;
        }

        else if (choice == 6) {
            cin >> a;
            cout << sqrt(a) << endl;
        }

        else if (choice == 7) {
            cin >> a;
            cout << a * 0.01 << endl;
        }

        else if (choice == 8) {
            cin >> n;
            long long f = 1;
            for (int i = 1; i <= n; i++) {
                f *= i;
            }
            cout << f << endl;
        }

        else if (choice == 9) {
            break;
        }

        else {
            cout << "Неверный выбор\n";
        }
    }

    return 0;
}
