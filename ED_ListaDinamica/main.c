#include <stdio.h>
#include <stdlib.h>
#include "././lista_dinamica.h"

int main(int argc, char *argv[]) {
	ListaDinamica l1 = init();
	ListaDinamica l2 = init();

	printf("\n******** Lista 1 ********");
	// Insertando en lista en 1:
	l1 = insertar(l1, 5);
	l1 = insertar(l1, 7);
	l1 = insertar(l1, 8);
	l1 = insertar(l1, -12);
	l1 = insertar(l1, 7);
	l1 = insertar(l1, 6);
	l1 = insertar(l1, 4);
	l1 = insertar(l1, 9);
	printf("\nLista 1 (Insertando): ");
	display(l1);	
	
	// Insertando en lista en 1:
	l1 = insertar_en(l1,2,3);
	l1 = insertar_en(l1,4,15);
	l1 = insertar_en(l1,1,27);
	l1 = insertar_en(l1,5,92);
	l1 = insertar_en(l1,10,19);
	printf("\nLista 1 (Insertando en): ");
	display(l1);
	
	// Borrando en lista en 1:
	l1 = borrar(l1);
	l1 = borrar(l1);
	printf("\nLista 1 (Borrando): ");
	display(l1);
	
	// Borrando en lista en 1:
	l1 = borrar_en(l1,2);
	l1 = borrar_en(l1,5);
	l1 = borrar_en(l1,9);
	printf("\nLista 1 (Borrando en): ");
	display(l1);
	
	// Ordenando lista en 1:
	printf("\nLista 1 (Ordenamiento): ");
	ordenar(l1);
	display(l1);
	
	// Buscando lista en 1:
	printf("\nBuscar Numero 2:");
	if(busqueda(l1, 2) == 1) printf("\nValor presente");
	else printf("\nValor No presente");
	printf("\nBuscar Numero 8:");
	if(busqueda(l1, 8) == 1) printf("\nValor presente");
	else printf("\nValor No presente");
	
	printf("\n\n******** Lista 2 ********");
	// Insertando en lista en 2:
	l2 = insertar(l2, 8);
	l2 = insertar(l2, 23);
	l2 = insertar(l2, 4);
	l2 = insertar(l2, -6);
	l2 = insertar(l2, 7);
	l2 = insertar(l2, -2);
	printf("\nLista 2 (Insertando): ");
	display(l2);
	
	// Borrando en lista en 2:
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	l2 = borrar(l2);
	printf("\nLista 2 (Borrando): ");
	display(l2);
	
	destroy(l1);
	destroy(l2);
	
	return 0;
}
