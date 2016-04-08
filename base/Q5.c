char *Question5 = "Q5:请编写一个函数void fun(int m,int k,int xx[]),该函数的功能是：将大于整数m且紧靠m的k各素数存入xx所指的数组中。";

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int is_primeNumber(int num)
{
	int i;
	int n = sqrt(num);
	for (i = 2; i <= n; ++i)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;
}

void statistic(int m, int k, int xx[])
{
	int i = 0;
	while (i != k)
	if (is_primeNumber(++m))
		xx[i++] = m;
}

void Q5()
{
	puts(Question5);
	int i, m, k, *xx;
	printf("Please input the base number m: ");
	scanf("%d", &m);
	printf("Please input the number of prime number you want:");
	scanf("%d", &k);
	xx = (int*)malloc(k*sizeof(int));
	statistic(m, k, xx);
	for (i = 0; i < k; ++i)
		printf("%d ", xx[i]);
	return 0;
}