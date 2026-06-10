#pragma once
#include <iostream>
using namespace std;

class AB //класс
{

private:
    string name;
    int numberVisits;
    int activitySeconds;
    int profitAll;
    int profitPotential;

public:
    AB();
    AB(string, int, int, int, int); //основа...
    void setAB(string, int, int, int, int); // Создаем пользователя... лишь создаем, к сожалению     
    void getAB(); //Выводим данные
    void timeAB();
    void profitAB();
    void hourAB();
    AB(const AB&); // это конструктор копирования
    ~AB(); // это деструктор
};
