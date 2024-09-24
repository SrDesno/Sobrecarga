#include "Rect.h"

Rect::Rect(){
  x=0;
  y=0;
}

Rect::Rect(int _x, int _y){
  x=_x;
  y=_y;
}

Rect Rect::operator+(const Rect& val){
  Rect temp;
  temp.x = this->x + val.x;
  temp.y = this->y + val.y; 
  return temp;
}

Rect Rect::operator-(const Rect& val){
  Rect temp;
  temp.x = this->x - val.x;
  temp.y = this->y - val.y; 
  return temp;
}

int Rect::getx(){
  return x;
}

int Rect::gety(){
  return y;
}

void Rect::setx(int _x){
  x=_x;
}

void Rect::sety(int _y){
  y=_y;
}

void Rect::mostrarMas(){
  std::cout<<"El resultado de la suma es: "<<x<<","<<y<<std::endl;
}

void Rect::mostrarMenos(){
  std::cout<<"El resultado de la resta es: "<<x<<","<<y<<std::endl;
}