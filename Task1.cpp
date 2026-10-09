#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число студентов\n";
    cin >> n;
    int counter2 = 0;
    int counter1 = 0;
    if (n < 1 || n>30)
    {
        cout << "Ошибка ввода";
        return 0;
    }
    for (int i = 1; i <=n ; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Номер студента: " << i << " " << "Номер группы: " << 2 << "\n";
            counter2 += 1;
        }
        else
        {
            cout << "Номер студента: " << i << " " << "Номер группы: " << 1 << "\n";
            counter1 += 1;
        }
    }
    cout << "Количество студентов в первой группе: " << counter1 << "\n";
    cout << "Количество студентов во второй группе: " << counter2;
}

