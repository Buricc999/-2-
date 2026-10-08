#include <iostream>
#include <clocale>
using namespace std;


int main()
{
    int attendance;
    int unsubmitted;
    double avg;
    setlocale(LC_ALL, "Russian");
    cout << "Введите посещаемость, количество несданных лабораторных и средний балл\n";
    cin >> attendance >> unsubmitted >> avg;
    if (attendance < 0 || attendance > 100)
    {
        cout << "Ошибка, недопустимая посещаемость\n";
        return 1;
    }
    if (unsubmitted < 0)
    {
        cout << "Ошибка, недопустимое количество лабораторных\n";
        return 1;
    }
    if (avg < 0 || avg > 10)
    {
        cout << "Ошибка, недопустимый средний балл \n";
        return 1;
    }

    if (attendance >= 75 && unsubmitted == 0 && avg >= 5)
    {
        cout << "Студент допущен\n";
        return 0;
    }
    cout << "Студент не допущен. Причина: ";
    if (unsubmitted > 0)
        cout << "Есть несданные лабораторные работы\n";
    else if (attendance < 75)
        cout << "Посещаемость ниже 75%\n";
    else
        cout << "Средний балл ниже 5\n";


    return 0;


}
