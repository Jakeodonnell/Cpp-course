#include "poly2.h"
#include <cmath>
#include <iostream>


Poly2::Poly2(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

float Poly2::eval(float x){
	float value;
	value = a*(x*x) + b*x + c;
	std::cout << "y(x): "<< value << std::endl;
	return value;
}

void Poly2::findRoots(int &roots, float &x1, float &x2)
{
	float d;
	int amount;
	
	d = (b*b) - (4*a*c);
    if(d == 0){
		x1 = (-b)/ (2*a);
		x2 = x1;
		roots = 1;
	}else if(d > 0 ){
		x1 = (-b - sqrt(b*b - (4*a*c)))/(2*a);
		x2 = (-b + sqrt(b*b - (4*a*c)))/(2*a);
		roots = 2;
	} else {
		 roots = 0;
	}
}