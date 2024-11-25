#include <iostream>
#include "coin.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Введіть число коїнів: "; cin >> n;

    COIN COIN_COLECTION[100];

    for (int i = 0; i < n; i++) {
        string countr, name;
        int year, nominal;
        double cost;

        cout << "Введіть дані " << i + 1 << " коїнів " << endl;
        cout << "Країна: "; cin >> countr;
        cout << "Ім'я: "; cin >> name;
        cout << "Рік: "; cin >> year;
        cout << "Номінал: "; cin >> nominal;
        cout << "Ціна: "; cin >> cost;
        COIN_COLECTION[i] = COIN(countr, name, year, nominal, cost);
    }

    cout << "Коїни 1961 року" << endl;
    for (int i = 0; i < n; i++) {
        if (COIN_COLECTION[i].year_get() == 1961) {
            COIN_COLECTION[i].show();
        }
    }

}

