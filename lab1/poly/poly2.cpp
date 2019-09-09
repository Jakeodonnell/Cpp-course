#include "poly2.h"
#include <cmath>

Poly2::Poly2(float a, float b, float c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

float Poly2::eval(float x)
{
    
    x1 = (-b - sqrt(b*b - (4*a*c)))/2*a;
	x2 = (-b + sqrt(b*b - (4*a*c)))/2*a;

}

void Poly2::findRoots()
{
    
    cout << "hej "<< endl;

}