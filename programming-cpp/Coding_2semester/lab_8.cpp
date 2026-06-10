/*
#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "Lab_8.h"

int main() {
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int size, shapeNumber;
    std::string name;

    std::cout << "Сколько фигур создаем? ";
    std::cin >> size;
    std::cout << "\n";

    std::cout << "(1 - квадрат, 2 - круг, 3 - треугольник)\n";
    Shape ** arr = new Shape*[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Генерируем фигуру №";
        std::cin >> shapeNumber;
        if (shapeNumber == 1) {
            arr[i] = new Square();
            arr[i]->Per(4);
            arr[i]->GetPer("Квадрат");
            std::cout << "На данный момент " << Shape::counter << " объектов\n\n\n\n";
        }
        else if (shapeNumber == 2) {
            arr[i] = new Circle();
            arr[i]->Per(1);
            arr[i]->GetPer("Круг");
            std::cout << "На данный момент " << Shape::counter << " объектов\n\n\n\n";
        }
        else if (shapeNumber == 3) {
            arr[i] = new Triangle();
            arr[i]->Per(3);
            arr[i]->GetPer("Треугольник");
            std::cout << "На данный момент " << Shape::counter << " объектов\n\n\n\n";
        }
        else {
            std::cout << "В данном релизе, фигур с такой кодировкой нет.\n\n";
            continue;
        }
        
    }
    for (int i = 0; i < size; i++) {
        delete arr[i];
        arr[i] = NULL;
    }
    return 0;
}
*/