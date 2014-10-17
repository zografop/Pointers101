#include <stdio.h>

int main(int argc, char *argv[]){

	int a[10][5] ;
	int *p ;
	
	p = (int *)a;
	
	*(p + 3*5 + 2) = 199; //anathetw sto stoixeio a[3][2] tin timi 199
	
	printf("with pointers \n %d \n", *(p + 3*5 + 2));
	printf("with matrix indexes \n %d \n", a[3][2]);
		
	return 0;


}
