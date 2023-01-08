#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Введите трехзначное число: ";
    cin >> number;
    int second_digit = (number / 10) % 10;
    cout << "Вторая цифра числа: " << second_digit << endl;
    return 0;
}