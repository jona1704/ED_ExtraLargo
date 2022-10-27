// Implementación
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "lista_dinamica.h"

struct lista_dinamica{
	int * arr;
	int cont; // Contar los elementos en el arreglo
};

/*Lista init(){
	Lista lista;
	int i;
	for(i=0; i<MAX; i++){
		lista.arr[i] = 0;
	}	
	lista.cont = 0;
	return lista;
}*/

ListaDinamica init(){
	ListaDinamica lista = (ListaDinamica) malloc(sizeof(struct lista_dinamica));
	if(lista == NULL) exit(1);
	lista->arr = (int *) malloc(MAX * sizeof(int));
	if(lista->arr == NULL) exit(1);
	// Inicializamos los miembros de la lista
	int i;
	for(i=0; i<MAX; i++){
		lista->arr[i] = 0;
	}
	lista->cont = 0;
	return lista;
}

/*bool esVacia(ListaDinamica ListaDinamica){
	if(ListaDinamica.cont == 0){
		printf("\nListaDinamica vacia ...");
		return true;
	} else{
		return false;
	}
}*/

/*bool esVacia(ListaDinamica ListaDinamica){
	return ListaDinamica.cont==0?true:false;
}*/

bool esVacia(ListaDinamica lista_dinamica){
	return lista_dinamica->cont==0;
}

bool esLlena(ListaDinamica lista_dinamica){
	return lista_dinamica->cont==MAX;
}

// Suponer que las inserciones
// se hacen al final de la ListaDinamica
ListaDinamica insertar(ListaDinamica lista_dinamica, int dato){
	if(esLlena(lista_dinamica)){
		printf("\nListaDinamica Llena ...");
	} else{
		lista_dinamica->arr[lista_dinamica->cont] = dato;
		lista_dinamica->cont++;
	}
	return lista_dinamica;
}

ListaDinamica insertar_en(ListaDinamica lista_dinamica, int pos, int dato){
	if(esLlena(lista_dinamica)){
		printf("\nListaDinamica Llena ...");
	} else{
		// Validar que la pos no sea menor que 1
		// y la posicion sea mayor que el contador
		if((1<=pos) && (pos<=lista_dinamica->cont+1)){
			int i;
			// decrementando desde pos-1 a cont-1
			for(i=lista_dinamica->cont-1; i>=pos-1; i--){
				lista_dinamica->arr[i+1] = lista_dinamica->arr[i];
			}
			lista_dinamica->arr[pos-1] = dato;
			lista_dinamica->cont++;
		}
	}
	return lista_dinamica;
}

// Suponer que las eliminaciones
// se hacen al final de la lista
ListaDinamica borrar(ListaDinamica lista_dinamica){
	if(esVacia(lista_dinamica)){
		printf("\nLista vacia ...");
	} else{
			lista_dinamica->cont--;
	}
	return lista_dinamica;
}

ListaDinamica borrar_en(ListaDinamica lista_dinamica, int pos){
	if(esVacia(lista_dinamica)){
		printf("\nLista vacia ...");
	} else{
		if((pos<=1) && (pos<=lista_dinamica->cont)){
			int i;
			// incrementando desde cont-1 a pos-1
			for(i=pos-1; i<=lista_dinamica->cont; i++){
				lista_dinamica->arr[i] = lista_dinamica->arr[i+1];
			}
			lista_dinamica->cont--;
		}
	}
	return lista_dinamica;
}

// Busqueda lineal
int busqueda(ListaDinamica lista_dinamica, int buscado){
	int i;
	int n = lista_dinamica->cont;
	for(i=0; i<n; i++){
		if(lista_dinamica->arr[i] == buscado) return 1;
	}	
	return 0;
}

// Funcion de intercambio
void swap(int * a, int * b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void ordenar(ListaDinamica lista_dinamica){
	int i, j;
	int n = lista_dinamica->cont;
	int temp; // Para los intercambios
	for(i=0; i<n-1; i++){ // Numero de Pasos
		for(j=0; j<n-1; j++){ // Numero de iteraciones
			if(lista_dinamica->arr[j] > lista_dinamica->arr[j+1]){
				swap(&lista_dinamica->arr[j], &lista_dinamica->arr[j+1]);
			}
		}
	}
}

void display(ListaDinamica lista_dinamica){
	if(esVacia(lista_dinamica)){
		printf("\nLista vacia ...");
	} else{
		int i;
		for(i=0; i<lista_dinamica->cont; i++){
			printf("%d ", lista_dinamica->arr[i]);
		}
	}
}

// Como si fuera un destructor
void destroy(ListaDinamica lista_dinamica){
	free(lista_dinamica->arr);
	free(lista_dinamica);
}
