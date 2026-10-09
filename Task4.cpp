#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int rows, cols;
    cout << "Напишите число рядов и мест\n";
    cin >> rows;
    if (rows < 1 || rows > 8)
    {
        cout << "Недопустимое число рядов\n";
        return 0;
    }
    cin >> cols;
    if (cols < 1 || cols > 10)
    {
        cout << "Недопустимое число мест\n";
        return 0;
    }
    for (int i = 1; i <= rows; ++i)
    {
        cout << "Ряд " << i << ":";
        for (int j = 1; j <= cols; ++j)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << "\n";
    }
}

