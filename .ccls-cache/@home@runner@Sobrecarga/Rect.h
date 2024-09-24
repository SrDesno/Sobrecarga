#include <iostream>
#pragma once

class Rect{
  private:
    int x;
    int y;
  public:
    Rect();
    Rect(int, int);
    Rect operator+(const Rect& val);
    Rect operator-(const Rect& val);
    int getx();
    int gety();
    void setx(int);
    void sety(int);
    void mostrarMas();
    void mostrarMenos();
};