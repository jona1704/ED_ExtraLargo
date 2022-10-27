// Implementación
#include <stdio.h>
#include <stdbool.h>
#include "lista.h"

/*Lista init(){
	Lista lista;
	int i;
	for(i=0; i<MAX; i++){
		lista.arr[i] = 0;
	}	
	lista.cont = 0;
	return lista;
}*/

Lista init(){
	Lista lista = {{0}, 0};
	return lista;
}

/*bool esVacia(Lista lista){
	if(lista.cont == 0){
		printf("\nLista vacia ...");
		return true;
	} else{
		return false;
	}
}*/

/*bool esVacia(Lista lista){
	return lista.cont==0?true:false;
}*/

bool esVacia(Lista lista){
	return lista.cont==0;
}

bool esLlena(Lista lista){
	return lista.cont==MAX;
}

// Suponer que las inserciones
// se hacen al final de la lista
Lista insertar(Lista lista, int dato){
	if(esLlena(lista)){
		printf("\nLista Llena ...");
	} else{
		lista.arr[lista.cont] = dato;
		lista.cont++;
	}
	return lista;
}

// Suponer que las eliminaciones
// se hacen al final de la lista
Lista borrar(Lista lista){
	if(esVacia(lista)){
		printf("\nLista vacia ...");
	} else{
		lista.cont--;
	}
	return lista;
}

void display(Lista lista){
	if(esVacia(lista)){
		printf("\nLista vacia ...");
	} else{
		int i;
		for(i=0; i<lista.cont; i++){
			printf("%d ", lista.arr[i]);
		}
	}
}
