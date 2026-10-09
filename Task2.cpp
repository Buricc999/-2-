#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Вводите оценки \n";
    cin >> a;
    int counter1 = 0;
    int counter2 = 0;
    int countersum = 0;
    while (a != -1)
    {
        if (a >= 5 && a <= 10)
        {
            counter1++;
            counter2++;
            countersum += a;
        }
        else if (a >= 0 && a < 5)
        {
            countersum += a;
            counter2++;
        }
        cin >> a;
    }
    cout << "Количество принятых оценок: " << counter2 << "\n";
    cout << "Сумма оценок: " << countersum << "\n";
    cout << "Количество оценок не ниже пяти: " << counter1 << "\n";

}
