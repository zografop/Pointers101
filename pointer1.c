# include <stdio.h>

int main(int argc, char *argv[]){
	int *p,q;
	p = &q;
	*p = 10;
	printf("q's value is: %d \n", *p);
	
	return 0;
}
