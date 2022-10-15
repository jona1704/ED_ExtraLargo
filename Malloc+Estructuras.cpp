#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct agenda{
	int id;
	char nombre[40];
} Agenda;

// Agenda = struct agenda

int main(){
	Agenda a;
	a.id= 1000;
	strcpy(a.nombre, "Jonathan");
	printf("\nid=%d", a.id);
	printf("\nid=%s", a.nombre);
	// Otra variable
	Agenda * b = (Agenda *) malloc(sizeof(Agenda));
	if(b == NULL) exit(1);
	printf("\n\n");
	b->id= 2000;
	strcpy(b->nombre, "Manuel");
	printf("\nid=%d", (*b).id);
	printf("\nid=%s", b->nombre);
	
	// b->id = (*b).id
	
	free(b);
		
	return 0;
}
