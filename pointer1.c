# include <stdio.h>

int main(int argc, char *argv[]){
	int *p,q; //pointers to ints
	p = &q; // reference q's address with pointer p
	*p = 10;
	printf("q's value is: %d \n", *p);
	
	return 0;
}
