#include <iostream>
#include <cmath>
#pragma once
#include "Rect.h"

class Pol{
  private:
    int radius;
    int theta;
  public:
    Pol();
    Pol(int, int);
    Pol operator*(const Pol& val);
    Pol operator/(const Pol& val);
    int getRadius();
    int getTheta();
    void mostrarPor();
    void mostrarDiv();
};