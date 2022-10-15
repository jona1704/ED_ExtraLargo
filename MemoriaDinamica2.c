#include <stdio.h>
#include <stdlib.h>

int main(){
	// Se asigna direcci�n en tiempo de compilaci�n
	int a;
	// Se asigna direcci�n en tiempo de ejecuci�n
	int * b = (int *) malloc(sizeof(int));
	if(b == NULL) exit(1);
	
	printf("\nIngrese el valor de a: ");
	scanf("%d", &a);
	printf("\na=%d", a);
	
	printf("\nIngrese el valor de b: ");
	scanf("%d", b);
	printf("\na=%d", *b);
	printf("\ndir(b)=%d", &b); // Direccion en decimal
	printf("\ndir(b)=%p", &b); // Direccion en hexadecimal
	
	free(b);
	
	return 0;
}
