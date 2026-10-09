#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    do
    {
        cout << "Напишите посещаемость(%)\n";
        cin >> a;
    } while (a < 0 || a > 100);
    if (a >= 75)
    {
        cout << "Минимальный порог достигнут ";
    }
    else
    {
        cout << "Не хватает " << 75 - a << "%";
    }
    
}


