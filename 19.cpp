#include <iostream>

using namespace std;

int main()
{
    int num; // пятизначное число
    cout << "Введите пятизначное число: ";
    cin >> num; 
    
    int digit_1 = num / 10000; // первая цифра
    int digit_2 = (num % 10000) / 1000; // вторая цифра
    int digit_3 = (num % 1000) / 100; // третья цифра
    int digit_4 = (num % 100) / 10; // четвертая цифра
    int digit_5 = num % 10; // пятая цифра

    // проверяем, является ли число палиндромом
    if (digit_1 == digit_5 && digit_2 == digit_4)
        cout << "Да, это палиндром" << endl;
    else
        cout << "Нет, это не палиндром" << endl;

    return 0;
}