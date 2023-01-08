#include <iostream>
using namespace std;

int main()
{
    int day; // переменная для хранения дня недели
    cout << "Введите день недели (цифра): ";
    cin >> day; // ввод дня недели

    // проверка является ли день выходным
    if (day == 6 || day == 7) {
        cout << "Да" << endl;
    } else {
        cout << "Нет" << endl;
    }
    return 0;
}