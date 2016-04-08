#include <stdio.h>

union A{
	int a;
	char b;
	double c;
};

int main(){
	union A tmp;
	tmp.a = 10;
	printf("a = %d\n",tmp.a);
	printf("b = %d\n",tmp.b);
	printf("c = %d\n",tmp.c);
	tmp.b = 20;
	printf("a = %d\n",tmp.a);
	printf("b = %d\n",tmp.b);
	printf("c = %d\n",tmp.c);
	tmp.c = 3.14;
	printf("a = %d\n",tmp.a);
	printf("b = %d\n",tmp.b);
	printf("c = %d\n",tmp.c);
	printf("%d\n",sizeof(tmp));
	return 0;
}
