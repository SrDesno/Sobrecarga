#include <iostream>
#include "Rect.h"
#include "Pol.h"

int main() {
  Rect r1(1,2);
  Rect r2(3,4);
  Rect r3, r4;

  r3=r1+r2;
  r4=r1-r2;
  r3.mostrarMas();
  r4.mostrarMenos();

  Pol p1(6,45);
  Pol p2(2,90);
  Pol p3, p4;

  p3=p1*p2;
  p4=p1/p2;
  p3.mostrarPor();
  p4.mostrarDiv();
}