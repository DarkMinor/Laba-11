#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        int n, l, k, age;

        std::cout << "Введіть кількість скринь Чахлика: ";
        std::cin >> n;

        std::cout << "Введіть кількість скринь, які додається щороку: ";
        std::cin >> l;

        std::cout << "Введіть кількість скринь, необхідних для весілля: ";
        std::cin >> k;

        age = 18 + (k / l);

        std::cout << "Вік нареченої: " << age << std::endl;

        return 0;
 }