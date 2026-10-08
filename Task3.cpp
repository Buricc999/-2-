#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char symbol;
    int points;
    cout << "Введите символ аттестации и баллы\n ";
    cin >> symbol >> points;
    if (symbol != 'P' && symbol != 'E' && symbol != 'C')
    {
        cout << "Ошибка, недопустимый символ";
        return 1;
    }
    if (points < 0 || points > 100)
    {
        cout << "Ошибка, недопустимые баллы";
        return 1;

    }
    switch (symbol)
    {
    case 'E':
        cout << "Тип аттестации: Экзамен \n" << "Минимальный проходной балл: 50\n";
        if (points >= 50)
        {
            cout << "Passed";
        }
        else
        {
            cout << "Failed";
        }
        break;
    case 'C':
        cout << "Тип аттестации: Зачёт \n" << "Минимальный проходной балл: 60\n";
        if (points >= 60)
        {
            cout << "Passed";
        }
        else
        {
            cout << "Failed";
        }
        break;
    case 'P':
        cout << "Тип аттестации: Защита проекта \n" << "Минимальный проходной балл: 70\n";
        if (points >= 70)
        {
            cout << "Passed";
        }
        else
        {
            cout << "Failed";
        }
        break;
    }
}

