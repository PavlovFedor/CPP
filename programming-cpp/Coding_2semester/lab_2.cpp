/*
#include <iostream>
using namespace std;

void func() {
    for (int i = 0; i < 50; i++) {
        cout << '*';
    }
}

void func(char symbol) {
    for (int i = 0; i < 50; i++) {
        cout << symbol;
    }
}

void func(char symbol, int number) {
    for (int i = 0; i < number; i++) {
        cout << symbol;
    }
}

void func_last(char symbol, int number) {
    cout << "\n\n\nfunc all\n";

    cout << "\n1)";
    func();

    cout << "\n2)";
    func(symbol);

    cout << "\n3)";
    func(symbol, number);
}

int array_min(int a[], int n) {
    int minim = a[0];
    for (int i = 0; i < n; i++) {
        if (minim > a[i]) { minim = a[i]; }
    }
    return minim;
}

double array_min(double d[], int n) {
    double minim = d[0];
    for (int i = 0; i < n; i++) {
        if (minim > d[i]) { minim = d[i]; }
    }
    return minim;
}

template <class X>
X array_min(X a, X n) {
    int minim = a[0];
    for (int i = 0; i < n; i++) {
        if (minim > a[i]) { minim = a[i]; }
    }
    return minim;
}

int arithmetic_mean(int n, ...) {
    int* p_i = &n;
    int* p_ii = (int*)(p_i + 1);
    int sum = 0;

    for (int i = 0; i < n; i++, p_ii++) {
        if (i % 2 != 0) {
            sum += *p_ii;
            //  cout << "\nSum " << sum << "   i " << i << "   p_ii " << *p_ii;
        }
    }

    return sum / n;
}

int main() {

    func();                                                         // func1

    cout << "\nSymbol > ";
    char symbol;
    cin >> symbol;
    func(symbol);                                                   // func1


    cout << "\nNumber of characters > ";
    int number;
    cin >> number;
    func(symbol, number);                                           // func1

    func_last(symbol, number);                                       // func2

    cout << "\n\n\nLength of array > ";
    int n;
    cin >> n;
    cout << "\nElements int array >\n";
    int a[n];
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    cout << "\nElements double array >\n";
    double d[n];
    for (int i = 0; i < n; i++) { cin >> d[i]; }
    cout << "Min array int > " << array_min(a, n);                  // func3
    cout << "\nMin array double > " << array_min(d, n);             // func3


//Íàïèñàòü ôóíêöèþ ñ íåèçâåñòíûì êîëè÷åñòâîì ïàðàìåòðîâ, êîòîðàÿ èùåò
//ñðåäíåå àðèôìåòè÷åñêîå èç ýëåìåíòîâ â ñïèñêå ïàðàìåòðîâ, ñòîÿùèõ íà
//÷åòíûõ ìåñòàõ



    cout << "\n\n\nResult unknown func > " << arithmetic_mean(9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);                           // func4

    return 0;
}
*/