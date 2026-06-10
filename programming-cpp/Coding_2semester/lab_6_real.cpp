#include <iostream>
#include "Lab_6.h"
using namespace std;


AB::AB()
{
    name = "none";
    numberVisits = 0;
    activitySeconds = 0;
    profitAll = 0;
    profitPotential = 0;
}

AB::AB(string A, int B, int C, int D, int E) //основа...
{
    cout << "Ќу, понеслась!" << endl << endl;
    setAB(A, B, C, D, E);
}

void AB::setAB(string nameC, int numberVisitsC, int activitySecondsC, int profitAllC, int profitPotentialC) // —оздаем пользовател€... лишь создаем, к сожалению 
{
    name = nameC;
    numberVisits = numberVisitsC;
    activitySeconds = activitySecondsC;
    profitAll = profitAllC;
    profitPotential = profitPotentialC;
}

void AB::getAB() //¬ыводим данные
{
    cout << endl << " арточка пользовател€ сайта: " << endl << endl;
    cout << "»м€: " << name << endl;
    cout << " оличество посещений сайта: " << numberVisits << endl;
    cout << "ќбща€ активность поьзовател€ в секундах: " << activitySeconds << endl;
    cout << "ќбща€ прибыль от пользовател€: " << profitAll << endl;
    cout << "ѕотенциальна€ прибыль от ползовател€: " << profitPotential << endl << endl;
}

void AB::timeAB()
{
    int n = activitySeconds / numberVisits;
    cout << "¬ среднем пользователь проводит " << n << " секунд на сайте за одно посещение." << endl;
}

void AB::profitAB()
{
    double p1 = profitPotential, p2 = profitAll;
    double p = p2 / p1 * 100;
    cout << "Customer принес " << p << "% потенциальной прибыли. " << endl;
    if (p > 100) cout << "Customer принес отличную прибыль.   счастью, расчЄты его потенциала оказались ошибочны, это стоит учесть." << endl;
    if (p < 50) cout << "Customer мало реализован, стоит уделить ему больше внимани€!" << endl;
}

void AB::hourAB()
{
    int day = 0, hour = 0, minute = 0, seconds = 0;
    bool fhour = true, fminute = true;

    seconds = activitySeconds % 60;
    minute = activitySeconds / 60;

    while (fminute) {
        if (minute > 59) {
            hour++;
            minute -= 60;
        }
        else fminute = false;
    }

    while (fhour) {
        if (hour > 23) {
            day++;
            hour -= 24;
        }
        else fhour = false;
    }

    cout << "ѕользователь чилил на сайте " << day << " дней " << hour << " часов " << minute << " минут и " << seconds << " секунд(у,ы)" << endl;
}

AB::AB(const AB& obj) // это конструктор копировани€, пусть просто покажет где он сработал
{
    cout << endl << "“ут сработал конструктор копировани€" << endl;
}

AB::~AB() // это деструктор, пусть просто покажет где он сработал
{
    cout << endl << "“ут сработал деструктор" << endl;
}
