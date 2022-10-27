#include <stdio.h>
#include <stdlib.h>

// Funcion de intercambio
void swap(int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Algoritmo de la burbuja
// Bucles anidados
void burbuja(int arr[], int n){
	int i, j;
	int temp; // Para los intercambios
	for(i=0; i<n-1; i++){ // Numero de Pasos
		for(j=0; j<n-1-i; j++){ // Numero de iteraciones
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void insercion(int arr[], int n){
	int i, j;
	for(i=1; i<n; i++){
		for(j=i; j>0; j--){
			if(arr[j-1] > arr[j]){
				swap(&arr[j], &arr[j-1]);
			}
			else break; // Ya no hay más intercambios
		}
	}
}

// Busqueda lineal
int busqueda(int arr[], int n, int buscado){
	int i;
	for(i=0; i<n; i++){
		if(arr[i] == buscado) return 1;
	}	
	return 0;
}

// Desplegar
void desplegar(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
	int arr01[] = {7,8,-4,5,3,-3,11,9}; // Lista para Burbuja
	int arr02[] = {4,9,2,-1,5,8,3,2}; // Lista para Insercion
	int n = sizeof(arr01)/sizeof(arr01[0]);
	int m = sizeof(arr02)/sizeof(arr02[0]);
	printf("\n******** Algoritmo de la Burbuja ********");
	printf("\nArreglo Antes: ");
	desplegar(arr01, n);
	// Ordenar
	burbuja(arr01, n);
	printf("Arreglo Despu%cs de Ordenar: ", 130);
	desplegar(arr01, n);
	printf("\n******** Algoritmo de la Inserci%cn ********", 162);
	printf("\nArreglo Antes: ");
	desplegar(arr02, n);
	// Ordenar
	burbuja(arr02, n);
	printf("Arreglo Despu%cs de Ordenar: ", 130);
	desplegar(arr02, n);
	
	return 0;
}
