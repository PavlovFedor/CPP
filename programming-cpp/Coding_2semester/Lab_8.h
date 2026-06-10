#pragma once
#include <iostream>
#include <windows.h>
#include <time.h>
#include <string.h>
#include "Lab_8.h"

class Shape {
protected:
    int perimetr;
    float peri;
public:
    static int counter;
    Shape() : perimetr(0) { counter++; }
    virtual void Per(int) = 0;
    virtual void GetPer(std::string) = 0;
    int GetPerimetr() { return perimetr; }
    ~Shape() { counter--; }
};

class Square :public Shape {
private:
    int edge;
public:
    Square() :Shape(), edge(0) {}
    void Per(int);
    void GetPer(std::string);
};


class Circle :public Shape {
private:
    int edge;
public:
    Circle() :Shape(), edge(0) {}
    void Per(int);
    void GetPer(std::string);
};


class Triangle :public Shape {
private:
    int edge;
public:
    Triangle() :Shape(), edge(0) {}
    void Per(int);
    void GetPer(std::string);
};
