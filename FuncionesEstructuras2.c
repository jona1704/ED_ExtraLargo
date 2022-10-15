#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empleado{
	int id;
	char * nombre;
	char * apellido;
};

char buffer[40];

void ingresar(struct empleado * se){
	fflush(stdin); // stdin = entrada estandar o standar in
	printf("\nIngrese el id del empleado: ");
	scanf("%d", &(se->id));
	printf("\nIngrese el nombre del empleado: ");
	scanf("%s", buffer);
	se->nombre = (char*) malloc(strlen(buffer)+1);
	if(se->nombre == NULL) exit(1);
	printf("\nIngrese el apellido del empleado: ");
	scanf("%s", buffer);
	se->apellido = strdup(buffer);
}

void desplegar(struct empleado * se){
	printf("\nID: %d", se->id);
	printf("\nNombre: %s", se->nombre);
	printf("\nApellido: %s", se->apellido);
}

int main(){	
	struct empleado * se = NULL;
	se = (struct empleado *) malloc(sizeof(struct empleado));
	if(se == NULL) exit(1);
	
	ingresar(se);
	desplegar(se);
	
	free(se->nombre);
	free(se->apellido);
	free(se);
	
	return 0;
}
