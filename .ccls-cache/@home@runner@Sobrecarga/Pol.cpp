#include "Pol.h" // Include Pol.h 

Pol::Pol(){
  radius=0;
  theta=0;
}

Pol::Pol(int _radius, int _theta){
  radius=_radius;
  theta=_theta;
}

Pol Pol::operator*(const Pol& val){
  Pol temp;
  temp.radius = this->radius * val.radius;
  temp.theta = this->theta + val.theta;
  return temp;
}

Pol Pol::operator/(const Pol& val){
  Pol temp;
  temp.radius = this->radius / val.radius;
  temp.theta = this->theta - val.theta;
  return temp;
}

int Pol::getRadius(){
  return radius;
}

int Pol::getTheta(){
  return theta;
}

void Pol::mostrarPor(){
  std::cout<<"El resultado de la multiplicación es: "<<radius<<","<<theta<<std::endl;
}

void Pol::mostrarDiv(){
  std::cout<<"El resultado de la división es: "<<radius<<","<<theta<<std::endl;
}
