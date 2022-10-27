#include <stdio.h>
#include <stdlib.h>
#include "././lista.h"

int main(int argc, char *argv[]) {
	Lista l1 = init();
	Lista l2 = init();
	
	printf("\n******** Lista 1 ********");
	// Insertando en la lista 1:
	l1 = insertar(l1, 6);
	l1 = insertar(l1, 7);
	l1 = insertar(l1, 4);
	l1 = insertar(l1, 8);
	printf("\nLista 1 (Insertando): ");
	display(l1);
	
	// Borrando en la lista 1:
	l1 = borrar(l1);
	l1 = borrar(l1);
	printf("\nLista 1 (Borrando): ");
	display(l1);
	
	printf("\n\n******** Lista 2 ********");
	// Insertando en la lista 2:
	l2 = insertar(l2, 8);
	l2 = insertar(l2, 23);
	l2 = insertar(l2, 4);
	l2 = insertar(l2, -6);
	l2 = insertar(l2, 7);
	l2 = insertar(l2, -2);
	printf("\nLista 2 (Insertando): ");
	display(l2);
	
	// Borrando en la lista 2:
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	printf("\nLista 2 (Borrando): ");
	display(l2);
	
	return 0;
}
