#include <stdio.h>
#include "complejos.h"

Complejo crear_complejo(double a, double b){
	Complejo z;
	z.real = a;
	z.img = b;
	return z;
}

Complejo suma(Complejo c1, Complejo c2){
	Complejo s;
	s.real = c1.real + c2.real;
	s.img = c1.img + c2.img;
	return s;
}


Complejo resta(Complejo c1, Complejo c2){
	Complejo r;
	r.real = c1.real - c2.real;
	r.img = c1.img - c2.img;
	return r;	
}

Complejo multiplicacion(Complejo c1, Complejo c2){
    Complejo m;
    m.real = (c1.real * c2.real) - (c1.img * c2.img);
    m.img = (c1.real * c2.img) + (c1.img * c2.real);
    return m;
}

Complejo division(Complejo c1, Complejo c2){
    Complejo div;
    double denominador = (c2.real * c2.real) + (c2.img * c2.img);
    div.real = (c1.real * c2.real) + (c1.img * c2.img)/denominador;
    div.img = (c1.img * c2.real) - (c1.real * c2.img)/denominador;
    return div;
}

void print(Complejo z){
	if(z.img<0){
		printf("\n%.2lf-%.2lfi", z.real, (-1)*z.img);
	} else if((z.img == 0) && (z.real == 0)){
		printf("\n0+0i");
	} else if(z.img == 0){
		printf("\n%.2lf", z.real);
	} else if(z.real == 0){
		printf("\n%.2lfi", z.img);
	} else{
		printf("\n%.2lf+%.2lfi", z.real, z.img);
	}
}
