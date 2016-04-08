char *Question20 = "Q20:编写函数int fun(int lim,int aa[max]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。 ";

#include<stdio.h>
#include<math.h>
#define max 100000

int funQ20(int lim, int aa[])
{
	int i, k = 0;
	for (i = 2; i <= lim; ++i)
	{
		if (isPrime(i))
			aa[k++] = i;
	}
	return k;
}
void Q20()
{
	puts(Question20);
	int rim, aa[max], n, i;
	printf("Please enter a number:");
	scanf("%d", &rim);
	n = funQ20(rim, aa);
	printf("The prime small than %d has %d,they are below:\n", rim, n);
	for (i = 0; i < n; ++i)
		printf("%d ", aa[i]);
	printf("\n");
}