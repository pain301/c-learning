#include <stdio.h>

void swap1(int *,int *);
void swap2(int *,int *);

int main(){
	int a = 20;
	int b = 30;
	printf("a = %d,b = %d\n",a,b);
	swap2(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}

void swap1(int *a,int *b){
	*a+=*b;
	*b = *a-*b;
	*a = *a-*b;
}

void swap2(int *a,int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}
