char *Question60 = "Q61:���д����fun���ú����Ĺ����ǣ�ɾȥһά������������ͬ������ʹֻ֮ʣһ���������е����Ѱ���С�����˳�����У���������ɾ�������������ݵĸ�����";

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