#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int points, attendance, labs, project;
    cout << "Введите баллы, посещаемость, метки того сданы ли лабы и защищен ли проект(1 или 0)\n";
    cin >> points >> attendance >> labs >> project;
    if (points < 0 || points > 100)
    {
        cout << "Ошибка: некорректный ввод баллов\n";
        return 1;
    }
    if (attendance < 0 || attendance > 100)
    {
        cout << "Ошибка: некорректный ввод посещаемости\n";
        return 1;
    }
    if (labs != 0 && labs != 1)
    {
        cout << "Ошибка: признак лабораторных работ 1 или 0\n";
        return 1;
    }
    if (project != 0 && project != 1)
    {
        cout << "Ошибка: признак проектов 1 или 0\n";
        return 1;
    }
    if (attendance < 60)
    {
        cout << "Не допущен к аттестации\n";
        return 0;
    }
    if (labs == 0)
    {
        cout << "Лабораторные не сданы\n";
        return 0;
    }
    if (project == 0)
    {
        cout << "Проект не защищён\n";
        return 0;
    }
    if (points >= 90 && points <= 100)
    {
        cout << "Отлично\n";
    }
    else if (points >= 70 && points <= 89)
    {
        cout << "Хорошо\n";
    }
    else if (points >= 50 && points <= 69)
    {
        cout << "Зачтено\n";
    }
    else if (points < 50)
    {
        cout << "Не зачтено\n";
    }
    

    

}


