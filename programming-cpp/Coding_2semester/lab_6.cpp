/*
# include <iostream>
# include <string>
# include "Lab_6.h"
using namespace std;


   void cucumberCopyShow(AB object) // принимает копированный объект как параметр
    {
        cout << "‘ункци€ дл€ бесполезного копировани€ огурца свершилась" << endl;
    }


   int main()
   {
       setlocale(LC_ALL, "rus");

       string name;
       int numberVisits, activitySeconds, profitAll, profitPotential;

       AB cucumber("none", 1, 2, 3, 4);  //создаЄм конструкторный класс огурец
       cucumber.setAB("none", 0, 0, 0, 0);//инициализируем шаблон
       cucumber.getAB();   //выводим шаблон

       cout << " ак зовут пользовател€? ";
       cin >> name;
       cout << "—колько раз заходил пользователь? ";
       cin >> numberVisits;
       cout << "—колько секунд был активен пользователь? ";
       cin >> activitySeconds;
       cout << " акова обща€ прибыль от пользовател€? ";
       cin >> profitAll;
       cout << " акова потенциальна€ прибыль от пользовател€? ";
       cin >> profitPotential;

       cucumber.setAB(name, numberVisits, activitySeconds, profitAll, profitPotential);   //присвоим новые значени€ переменным
       cucumber.getAB();   //и выведем их на экран
       cucumber.timeAB();  //сколько на нашем сайте зависает пользователь в среднем
       cucumber.profitAB();//точно ли стоит этому пользователю удел€ть особое внимание
       cucumber.hourAB();  //врем€ бежит неумолимо...
       cucumberCopyShow(cucumber);// райне полезное копирование огурца дл€ галочки
   }
   */