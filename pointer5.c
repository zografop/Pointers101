#include <stdio.h>

int main(int argc, char *argv[]){

	int a[10] = {10, 20, 30 , 40, 50, 60, 70, 80, 90, 100 };
	int *p ;
	p = a;
	
	printf("with pointers \n %d %d %d \n", *p, *(p+1), *(p+2));
	printf("with matrix indexes \n %d %d %d \n", a[0], a[1], a[2] );
	
	return 0;


}
