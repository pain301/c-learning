char *Question27 = "Q27:���дһ������fun,���Ĺ����ǣ����1��m֮��(��m)�ܱ�7��11����������������������a�У�ͨ��n������Щ���ĸ�����";

#include<stdio.h>
#define M 1000
void funQ27(int a[], int m, int *n)
{
	int i;
	for (i = 1, *n = 0; i <= m; ++i){
		if (i % 7 == 0 || i % 11 == 0)
			a[(*n)++] = i;
	}
}

void Q27()
{
	int a[M], m, n;
	printf("Please enter a number:");
	scanf("%d", &m);
	funQ27(a, m, &n);
	int i;
	for (i = 0; i < n; ++i){
		printf("%d ", a[i]);
	}
	printf("\n");
}