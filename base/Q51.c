char *Question51 = "Q51:请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回。";

#include "head.h"

void beNotPrime(int *xx, int m, int *k)
{
	int i;
	for (i = 1, *k = 0; i <= m; ++i){
		if (!isPrime(i)){
			xx[(*k)++] = i;
		}
	}
}

void Q51()
{
	puts(Question51);
	int xx[SIZE], k, m;
	printf("Please enter a number:");
	scanf("%d", &m);
	beNotPrime(xx, m, &k);
	int i;
	for (i = 0; i < k; ++i){
		printf("%d ", xx[i]);
		if (i != 0 && i % 10 == 0){
			printf("\n");
		}
	}
	return 0;
}