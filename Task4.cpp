#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int course, attendance, science, debts;
    double avg;
    double scholarship = 0;
    string rules = "";
    cout << "Введите курс, средний балл, посещаемость, задолженности, участие в научной работе (0/1):\n";
    cin >> course >> avg >> attendance >> debts >> science;
    if (course < 1 || course > 4) 
    { 
        cout << "Ошибка: курс 1..4\n"; 
        return 1; 
    }
    if (avg < 0 || avg > 10) 
    {
        cout << "Ошибка: балл 0..10\n";
        return 1;
    }
    if (attendance < 0 || attendance > 100)
    {
        cout << "Ошибка: посещаемость 0..100\n";
        return 1; 
    }
    if (debts < 0) 
    {
        cout << "Ошибка: задолженности < 0\n"; 
        return 1; 
    }
    if (science != 0 && science != 1)
    { 
        cout << "Ошибка: участие в научной работе 0 или 1\n";
        return 1;
    }

    switch (course)
    {
    case 1:
        scholarship = 100;
        rules += "Правило: первый курс\n";
        break;
    case 2:
        scholarship = 110;
        rules += "Правило: второй курс\n";
        break;
    case 3:
        scholarship = 120;
        rules += "Правило: третий курс\n";
        break;
    case 4:
        scholarship = 130;
        rules += "Правило: четвёртый курс\n";
        break;
    }
    if (attendance < 75)
    {
        rules += "Правило: посещаемость меньше 75\n";
        scholarship = 0;
    }
    else if (debts >= 1)
    {
        rules += "Правило: есть задолженность\n";
        scholarship = 0;


    }
    else {
        if (avg >= 9)
        {
            scholarship = scholarship * 1.3;
            rules += "Правило: средний балл выше или равен 9\n";

        }
        else if (avg >= 8)
        {
            scholarship = scholarship * 1.15;
            rules += "Правило: средний балл от 8 до 9\n";
        }
        if (science == 1)
        {
            scholarship = scholarship + 20;
            rules += "Участие в научной работе\n";
        }
    }
    cout << "Стипендия составила " << scholarship << "\n";
    cout << rules;

}

