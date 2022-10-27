#include <stdio.h>
#include <stdlib.h>
#include "././prueba.h"

int main(int argc, char *argv[]) {
	int s = suma(73, 21);
	printf("suma=%d", s);
	int r = resta(73, 21);
	printf("\nresta=%d", r);
	int m = multiplicacion(73, 21);
	printf("\nmultiplicacion=%d", m);
	int d = division(73, 21);
	printf("\ndivision=%d", d);
	
	return 0;
}
