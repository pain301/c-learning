char *Question60 = "Q61:请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩一个。数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。";

#include "head.h"

int delSameElem(int *a, int n)
{
	int i, j;
	for (i = 0, j = 0; i < n; ++i){
		if (a[i] != a[j]){
			a[++j] = a[i];
		}
	}
	return j + 1;
}

int delSameElem2(int *a, int n)
{
	int i, j, k;
	for (i = 0; i < n - 1; ++i){
		for (j = i + 1; j < n; ++j){
			if (a[i] == a[j]){
				for (k = j; k < n - 1; ++k){
					a[k] = a[k + 1];
				}
				--n;
				--j;
			}
		}
	}
	return n;
}

void Q60()
{
	puts(Question60);
	int a[SIZE], i;
	srand(time(NULL));
	for (i = 0; i < SIZE; ++i){
		a[i] = rand() % 10;
	}
	for (i = 0; i < SIZE; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	int k = delSameElem2(a, SIZE);
	printf("The signal elements are:\n");
	for (i = 0; i < k; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}