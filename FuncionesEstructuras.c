#include <stdio.h>
#include <stdlib.h>

struct empleado{
	int id;
	char nombre[40];
	char apellido[40];
};

struct empleado ingresar(){
	struct empleado se;
	fflush(stdin); // stdin = entrada estandar o standar in
	printf("\nIngrese el id del empleado: ");
	scanf("%d", &(se.id));
	printf("\nIngrese el nombre del empleado: ");
	scanf("%s", se.nombre);
	printf("\nIngrese el apellido del empleado: ");
	scanf("%s", se.apellido);
	
	return se;
}

void desplegar(struct empleado se){
	printf("\nID: %d", se.id);
	printf("\nNombre: %s", se.nombre);
	printf("\nApellido: %s", se.apellido);
}


int main(){	
	struct empleado se;
	se = ingresar();
	desplegar(se);
		
	return 0;
}
