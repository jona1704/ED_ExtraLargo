#include <stdio.h>
#include <stdlib.h>
#include "././complejos.h"

int main(int argc, char *argv[]) {	
	Complejo c1 = crear_complejo(3.56, -12.45);
	Complejo c2 = crear_complejo(-3.14, 7.35);
	Complejo c3 = crear_complejo(0, 0);
	Complejo s = suma(c1, c2);
	Complejo r = resta(c1, c2);
	Complejo m = multiplicacion(c1, c2);
	Complejo d = division(c1, c2);
	print(s);
	print(r);
	print(m);
	print(d);
	print(c3);
	
	return 0;
}
