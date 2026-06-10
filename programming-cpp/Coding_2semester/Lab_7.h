#pragma once
#include "stdafx.h"
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class tomato
{
private:
    int x1, x2, x3, y1, y2, y3;
    float S;
public:
    tomato()//конструктор в котором очистим переменные от мусора
    {
        x1 = 0; x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0; S = 0;
    }
    ~tomato() {};
    void operator <(const tomato&);//прототипы методов класса в котором мы перегрузим операторы
    void operator >(const tomato&);
    void operator ==(const tomato&);
    void operator +(int);
    void operator +=(int);
    void setTomato();//метод ввода данных на экран
    void getTomato();//метод вывода данных на экран
};
