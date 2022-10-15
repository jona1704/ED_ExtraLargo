#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 5;
	/* malloc retorna un apuntador a void:  void *  
		(int *) void * = int *
	*/
	int * arr = (int *) malloc(n * sizeof(int));
	if(arr == NULL) exit(1);
	// Usando el arreglo dinamico
	int i;
	for(i=0; i<n; i++){
		arr[i] = i+1;
	}
	printf("\n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	// Redimensionar el arreglo
	n = 10;
	arr = (int *) malloc(n * sizeof(int));
	if(arr == NULL) exit(1);
	// Usando el arreglo dinamico
	for(i=0; i<n; i++){
		arr[i] = i+1;
	}
	printf("\n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	// Liberar la memoria
	//free(arr); // Memory Leak = Fuga de memoria (memoria no liberado con free)
	
	return 0;
}
