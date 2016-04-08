char *Question69 = "Q69:请编写一个函数fun，它的功能时：求fibonacci数列中大于t的最小的一个数，结果由函数返回。其中fibonacci数列f(n)的定义为：f(0)=0,f(1)=1,f(n)=f(n-1)+f(n-2) ";

#include "head.h"

void Q69()
{
	puts(Question69);
	long t;
	printf("Please enter a number: ");
	scanf("%ld",&t);
	long i, j, k;
	printf("Fibonacci list that less than %ld :\n", t);
	for (i = 0, j = 1, k = j; k <= t; k = i + j, i = j, j = k){
		printf("%ld ",k);
	}
	printf("\nThe number in fibonacci which is bigger than %ld is:%ld\n",t,k);
}