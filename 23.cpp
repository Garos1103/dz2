#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Введите число: " << endl;
    cin >> n;
    cout << "Таблица кубов чисел от 1 до " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i*i*i << " ";
    }
    cout << endl;
    return 0;
}