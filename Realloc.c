#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int * ptr = (int *) malloc(sizeof(int));
	if(ptr == NULL) exit(1);
	
	*ptr = 10;
	
	printf("\n*ptr=%d", *ptr);
	printf("\ndir(*ptr)=%p", ptr);
	printf("\ndir(ptr)=%p", &ptr);
	
	// realloc = resizing allocation o reasignación 
	ptr = (int *) realloc(ptr, 10*sizeof(int));
	if(ptr == NULL) exit(1);
	
	int i;
	for(i=0; i<10; i++){
		ptr[i] = 1+i;
	}
	
	printf("\n\n");
	for(i=0; i<10; i++){
		printf("%d ", ptr[i]);
	}	
	
	free(ptr); // deallocation o desasignar o liberar memoria
	
	return 0;
}
