#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Приклад даних
    const char* continents[] = { "Африка", "Європа", "Азія", "Австралія", "Східна півкуля", "Західна півкуля" };
    int areas[] = { 30370000, 10400000, 44579000, 7692000, 138700000, 138700000 };

    // Введення першої літери назви країни
    char letter;
    cout << "Введіть першу літеру назви країни: ";
    cin >> letter;

    // Виведення результату
    if (letter == 'А') {
        cout << "Країна належить до континенту " << continents[0] << endl;
        cout << "Її площа становить " << areas[0] << " км квадратних" << endl;
    }
    else if (letter == 'Є') {
        cout << "Країна належить до континенту " << continents[1] << endl;
        cout << "Її площа становить " << areas[1] << " км квадратних" << endl;
    }
    else if (letter == 'Аз') {
        cout << "Країна належить до континенту " << continents[2] << endl;
        cout << "Її площа становить " << areas[2] << " км квадратних" << endl;
    }
    else if (letter == 'Ав') {
        cout << "Країна належить до континенту " << continents[3] << endl;
        cout << "Її площа становить " << areas[3] << " км квадратних" << endl;
    }
    else if (letter == 'С') {
        cout << "Країна належить до континенту " << continents[4] << endl;
        cout << "Її площа становить " << areas[4] << " км квадратних" << endl;
    }
    else if (letter == 'З') {
        cout << "Країна належить до континенту " << continents[5] << endl;
        cout << "Її площа становить " << areas[5] << " км квадратних" << endl;
    }
    else {
        cout << "Невірна літера" << endl;
    }

    // Додатковий код
    if (letter == 'О') {
        cout << "Країна належить до двох континентів: Європи та Азії" << endl;
    }
    else if (letter == 'І') {
        cout << "Країна належить до двох континентів: Європи та Африки" << endl;
    }
    else if (letter == 'Н') {
        cout << "Країна належить до двох континентів: Азії та Африки" << endl;
    }

    return 0;
}