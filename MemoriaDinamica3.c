#include <stdio.h>
#include <stdlib.h>

struct informacion{
	int x;
	int * y;
};

typedef struct informacion Informacion;

int main(){
	
	Informacion * info = NULL;
	// Tomar memoria o asignar memoria
	info = (Informacion *) malloc(sizeof(Informacion));
	if(info == NULL) exit(1);
	info->x = 10;
	info->y = (int *) malloc(sizeof(int));
	*(info->y) = 14;
	
	printf("x=%d", info->x);
	printf("\ny=%d", *(info->y));
	printf("\ndir(y)=%p", info->y);
	printf("\n&y=%p", &info->y);
	
	// Desasignar memoria
	free(info->y);
	free(info);
	
	return 0;
}
