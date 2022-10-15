#include <stdio.h>
#include <stdlib.h>

int main(){
	// malloc = memory allocation o asignación de memoria
	int * x = (int *) malloc(sizeof(int)); // sizeof retorna el tamaño en bytes de una variable
	if(x == NULL) exit(1);
	printf("\nTeclee un numero: ");
	scanf("%d", x);
	printf("\nx=%d", *x);
	free(x);
	return 0;

}
