# include <stdio.h>

int main(int argc, char *argv[]){
	int *p;
	double q, temp;
	
	temp = 1234.56;
	p = &temp;
	q = *p;
	printf("q's value is: %lf , although it should be 1234.56 \n", q);
	
	return 0;
}
