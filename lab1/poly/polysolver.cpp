#include <iostream>
#include "poly2.h"

int main(int argc, char** argv)
{
	std::cout << "Root-finding started..." << std::endl;
	float a,b,c;
	int roots = 0;
	float x1 = 0;
	float x2 = 0;
	float val;
	int counter = 0;
	
	
	//Poly2 *poly = new Poly2(2, 3, 1);
	
	/*Poly2 *poly1 = new Poly2(2, -1, -1);
	Poly2 *poly2 = new Poly2(1, 1, 1);
	*/
	
	while(std::cin >> val) {
		if(counter % 3 == 0){
			a = val;
		}else if(counter % 3 == 1){
			b = val;
		} else if( counter % 3 == 2) {
			c = val;
		Poly2 *poly = new Poly2(a, b, c);
		poly->findRoots(roots, x1, x2);
				
		if(roots == 0) {
				std::cout << "imaginary roots" << std::endl;
		}else if (roots == 2) {
				std::cout <<"number of roots: " << roots << "\nx1: " <<  x1 << "\nx2: " << x2 << std::endl;
				poly->eval(x1);
				poly->eval(x2);
		}else if (roots == 1){
				std::cout <<"number of roots: " << roots << "\nx1: " <<  x1 << "\nx2: " << x2 << std::endl;
				poly->eval(x1);
				poly->eval(x2);
			}
		
				
		}
		counter ++;
	}
	
	//poly->findRoots(roots, x1, x2);
	//poly->eval(x1);
	//poly->eval(x2);
	return 0;
}