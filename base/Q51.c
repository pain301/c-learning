char *Question51 = "Q51:���д����fun���书���ǣ������д���1С������m�ķ���������xx��ָ�������У��������ĸ���ͨ��k���ء�";

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