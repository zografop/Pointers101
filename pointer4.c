# include <stdio.h>

int main(int argc, char *argv[]){
	int q = 1;
	int *p;
		
	p = &q;
	//*p++ ;
	(*p)++;
	
	printf("q's value is: %d \n", q);
	
	return 0;
}
