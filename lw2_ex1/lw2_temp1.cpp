#include <iostream>

using namespace std;

int main()
{
    double F;
    double C;
    setlocale(LC_ALL, "ru");
    
    cout << "Введите температуру в градусах Фаренгейта: \n";
    cin >> F;

    if (F <= 32)
    {
        cout << "Температура ниже точки замерзания" << endl;
    }
    else if (F > 32)
    {
        C = (F - 32) * (5.0 / 9.0);
        cout << "Температура в градусах Цельсия: " << C;
    }
    
}
