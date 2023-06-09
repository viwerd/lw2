#include <iostream>

using namespace std;

int main()
{
    int age;
    setlocale(LC_ALL, "ru");

    // stage 1
    cout << "Сколько лет? ";
    cin >> age;
    cout << "Твой возраст - " << age << endl;

    // stage 2
    if (age < 18 and age > 0)
    {
        cout << "Вы еще не достигли совершеннолетия";
    }
    
    // stage 3
    else if (age >= 18 and age < 30)
    {
        cout << "Вы в самом расцвете сил";
    }

    // stage 4
    else if (age >= 30 and age < 60)
    {
        cout << "Вы находитесь в среднем возрасте»";
    }

    // stage 5
    else if (age >= 60)
    {
        cout << "Вы пожилой гражданин";
    }
    return 0;
}
