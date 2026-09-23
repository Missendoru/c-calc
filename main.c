#include <stdio.h>
int sum(int x, int y){return x+y;}
int res(int x, int y){return x-y;}
int mul(int x, int y){return x*y;}
int div(int x, int y){return x/y;}

int main(void){
	int elec;
	int a, b;
	elec = a = b = 0;
	int (*func[4])(int x, int y) = {sum, res, mul, div};
	while(1){
		printf("operacion: ");
		scanf("%1d", &elec);
		printf("n1: ");
		scanf("%1d", &a);
		printf("n2: ");
		scanf("%1d", &b); 
		printf("resultado es %d\n\n", func[elec](a,b));
	}
	return 0;
}
