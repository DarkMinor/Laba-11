#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Вводимо координати точки
    cout << "Введіть координати точки (x, y): ";
    int x, y;
    cin >> x >> y;

    // Створюємо вектор вершин області
    vector<pair<int, int>> vertices = {
        {0, 0}, {10, 0}, {10, 5}, {5, 5}, {5, 0}
    };

    // Перевіряємо, чи попадає точка в область
    bool isInside = false;
    for (int i = 0; i < vertices.size(); i++) {
        if ((vertices[i].first <= x && x <= vertices[(i + 1) % vertices.size()].first) &&
            (vertices[i].second <= y && y <= vertices[(i + 1) % vertices.size()].second)) {
            isInside = !isInside;
        }
    }

    // Виводимо результат
    if (isInside) {
        cout << "Точка попадає в область." << endl;
    }
    else {
        cout << "Точка не попадає в область." << endl;
    }

    return 0;
}