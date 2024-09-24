#include "Rect.h"

Rect::Rectangular(){
  x=0;
  y=0;
}

Rectangular::Rectangular(int _x, int _y){
  x=_x;
  y=_y;
}

int Rectangular::getx(){
  return x;
}

int Rectangular::gety(){
  return y;
}