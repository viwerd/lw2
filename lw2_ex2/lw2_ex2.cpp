#include <iostream>

using namespace std;

int main()
{
    char a;
    double t = 0;
    double t1 = 0;
    setlocale(LC_ALL, "ru");

    cout << "Нажмите с для Цельсия или f для Фаренгейта: " << endl;
    cin >> a;

    cout << "Введите значение температуры: " << endl;
    cin >> t;

    if (a == 'c')
    {
        t1 = (9.0 / 5.0) * (t + 32);
        cout << "Температура Фаренгейта: " << t1 << endl;
    }
    else if (a == 'f')
    {
        t1 = (t - 32) * (5.0 / 9.0);
        if (t <= 32)
        {
            cout << "Температура ниже точки замерзания" << endl;
        }
        else 
        {
            cout << "Температура Цельсия: " << t1 << endl;
        }
    }
    
    char b;
    cout << "Хотите продолжить? (да - 1 ; нет - 0)" << endl;
    cin >> b;
    while (b == '1')
    {
        if (a == 'c')
        {
            t1 = (9.0 / 5.0) * (t + 32);
            cout << "Температура Фаренгейта: " << t1 << endl;
        }
        else if (a == '0')
        {
            t1 = (t - 32) * (5.0 / 9.0);
            if (t <= 32)
            {
                cout << "Температура ниже точки замерзания" << endl;
            }
            else
            {
                cout << "Температура Цельсия: " << t1 << endl;
            }
        }
        cout << "Хотите продолжить? (да - 1 ; нет - 0)" << endl;
        cin >> b;
    }

    return 0;
}