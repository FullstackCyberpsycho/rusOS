#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <random>
using namespace std;

int help(string mode)
{
    cout << " help - список команд" << endl;
    cout << " calc - калькулятор" << endl;
    cout << " cls - очистиь экран" << endl;
    cout << " rand - случайное число" << endl;

    return 0;
}

int calc(string mode)
{
    cout << " + (плюс)\n - (плюс)\n * (умножение)\n / (деление)" << endl;

    double number_1, number_2, result;

    cout << " введите первое число: ";
    cin >> number_1;

    cout << " введите оператор: ";
    string oper;
    cin >> oper;

    cout << " введите второе число: ";
    cin >> number_2;

    if (oper == "+")
    {
        result = number_1 + number_2;
        cout << " ответ: " << result;
    }
    else if (oper == "-")
    {
        result = number_1 - number_2;
        cout << " ответ: " << result;
    }
    else if (oper == "*")
    {
        result = number_1 * number_2;
        cout << " ответ: " << result;
    }
    else if (oper == "/")
    {
        result = number_1 / number_2;
        cout << " ответ: " << result;
    }
    else
    {
        cout << "Error: 404" << endl;
    }
    return 0;
}

int cls(string mode)
{
    system("cls");

    if (system("cls") == false)
    {
        system("clear");
    }

    return 0;
}

int rand(string mode)
{
    short numrand = rand() % 100;
    cout << numrand << endl;

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");

    for (int i = 0; ; i++)
    {
        cout << " Добро пожаловать в RusOS!" << endl;
        cout << " Введите " << "'help'" << ", чтобы получить список команд." << endl;

        string mode;
        cin >> mode;

        if (mode == "help")
        {
            help(mode);
        }
        else if (mode == "calc")
        {
            calc(mode);
        }
        else if (mode == "cls")
        {
            cls(mode);
        }
        else if (mode == "rand")
        {
            rand(mode);
        }
        else
        {
            cout << "Error: 404" << endl;
        }
    }

    system("stop");
    return 0;
}