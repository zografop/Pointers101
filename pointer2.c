# include <stdio.h>

int main(int argc, char *argv[]){
	int q;
	float *fp;
	
	fp = &q;
	*fp = 100.23;
	printf("q's value is: %lf \n", *fp);
	
	return 0;
}
