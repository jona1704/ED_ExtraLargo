#include <stdio.h>
#include <string.h>

struct prueba{
	int x;
	int y;
	float z;
	char w;
	char k[10]; // k decae en un apuntador
};

int main(){
	struct prueba sp;
	sp.x = 10;
	sp.y = 76;
	sp.z = 3.56;
	sp.w = 'a';
	strcpy(sp.k, "FES");
	/*
		strcpy(destino, fuente);
	*/
	
	/*
	   k = F E S '\0' '\0' '\0' '\0' '\0' '\0' '\0'
	*/
	
	printf("\nx=%d", sp.x);
	printf("\ny=%d", sp.y);
	printf("\nz=%f", sp.z);
	printf("\nw=%c", sp.w);
	printf("\nk=%s", sp.k);
	
	return 0;
}
