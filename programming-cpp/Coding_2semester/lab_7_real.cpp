#include "stdafx.h"
#include "Lab_7.h"
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

void tomato::setTomato()
{
    cout << "Введите координаты первой вершины(x y): ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины(x y): ";
    cin >> x2 >> y2;
    cout << "Введите координаты третий вершины(x y): ";
    cin >> x3 >> y3;
    cout << endl;
    S = abs((float(x2) - float(x1)) * (float(y3) - float(y1)) - (float(x3) - float(x1)) * (float(y2) - float(y1))) / 2;
}

void tomato::getTomato()
{
    cout << "Координаты первой вершины(x y): " << x1 << " " << y1 << endl;
    cout << "Координаты второй вершины(x y): " << x2 << " " << y2 << endl;
    cout << "Координаты третий вершины(x y): " << x3 << " " << y3 << endl;
    cout << "Площадь: " << S << endl << endl;

}

void tomato::operator <(const tomato& a)
{
    cout << S << " < " << a.S << "   It is "; // красивый вывод
    if (S < a.S) cout << "True" << endl << endl;
    else cout << "False" << endl << endl;
}

void tomato::operator >(const tomato& a)
{
    cout << S << " > " << a.S << "   It is "; // красивый вывод
    if (S > a.S) cout << "True" << endl << endl;
    else cout << "False" << endl << endl;
}

void tomato::operator ==(const tomato& a)
{
    bool flag1 = false, flag2 = false, flag3 = false;//создаем флаги для проверки каждой вершины, так красивей и наглядней, 
                                                     //чем просто вывести равны треугольники или нет
    if ((x1 == a.x1) and (y1 == a.y1))
    {
        cout << "Первые вершины равны по координатам" << endl;
        flag1 = true;
    }
    else
        cout << "Первые вершины различны по координатам" << endl;

    if ((x2 == a.x2) and (y2 == a.y2))
    {
        cout << "Вторые вершины равны по координатам" << endl;
        flag2 = true;
    }
    else cout << "Вторые вершины различны по координатам" << endl;

    if ((x3 == a.x3) and (y3 == a.y3))
    {
        cout << "Третьи вершины равны по координатам" << endl;
        flag3 = true;
    }
    else cout << "Третьи вершины различны по координатам" << endl;

    if (flag1 and flag2 and flag3)
        cout << endl << "Треугольники равны" << endl << endl << endl;
    else
        cout << endl << "Треугольники различны" << endl << endl << endl;
}

void tomato::operator +(int n)
{
    x1 += n;
    x2 += n;
    x3 += n;
    cout << "Сдвинутый треугольник:" << endl;
}

void tomato::operator +=(int n)
{
    x1 += n;
    x2 += n;
    x3 += n;
    cout << "Сдвинутый треугольник:" << endl;
}
