#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "Lab_8.h"
#include "Lab_8.h"

int Shape::counter{ 0 };//инициализируем

void Square::Per(int ini) {
        edge = rand() % 98 + 1;
        std::cout << "Длина рёбер квадрата = " << edge << std::endl;
        perimetr = edge*4;
    std::cout << "\nПериметр = " << perimetr << "\n";
}

void Square::GetPer(std::string ini) {
    std::cout << "Была создана фигура " << ini << " с периметром " << perimetr << "\n\n";
}

void Circle::Per(int ini) {
    edge = rand() % 98 + 1;
    std::cout << "Радиус = " << edge << std::endl;
    peri = float(edge) * 2 * 3.14;
    
    std::cout << "\nПериметр = " << peri << "\n";
}

void Circle::GetPer(std::string ini) {
    std::cout << "Была создана фигура " << ini << " с периметром " << peri << "\n\n\n";
}

void Triangle::Per(int ini) {
        edge = rand() % 98 + 1;
        std::cout << "Длина ребер равностороннего треугольника = " << edge << std::endl;
        perimetr = edge*3;
    std::cout << "\nПериметр = " << perimetr << "\n";
}

void Triangle::GetPer(std::string ini) {
    std::cout << "Была создана фигура " << ini << " с периметром " << perimetr << "\n";
}