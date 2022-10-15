#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// calloc = contiguos allocation o asignación contigua
	int * ptr = (int *) calloc(1, sizeof(int));
	if(ptr == NULL) exit(1);
	
	*ptr = 10;
	
	printf("\n*ptr=%d", *ptr);
	printf("\ndir(*ptr)=%p", ptr);
	printf("\ndir(ptr)=%p", &ptr);
	
	free(ptr); // deallocation o desasignar o liberar memoria
	
	return 0;
}
