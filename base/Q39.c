char *Question39 = "Q39:请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。";

/*测试数据：1 2 3 4 5 6 7 8 9 10*/

#include "head.h"
#define N 10
void reverseQ39(int a[], int low, int high)
{
	while (low < high){
		a[low] = a[low] ^ a[high];
		a[high] = a[low] ^ a[high];
		a[low] = a[low] ^ a[high];
		++low;
		--high;
	}
}

void moveQ39(int a[], int n, int k)
{
	reverseQ39(a, 0, n - 1);
	reverseQ39(a, 0, n - k - 1);
	reverseQ39(a, n - k, n - 1);
}

void Q39()
{
	puts(Question39);
	int arr[N], i, k;
	printf("Please enter %d numbers to create array.\n", N);
	for (i = 0; i < N; ++i)
		scanf("%d", arr + i);
	printf("Please enter a number(1-%d):\n", N - 1);
	scanf("%d", &k);
	while (k <= 0 || k >= N){
		printf("The number must bigger than 0 and small than %d.\n", N);
		scanf("%d", &k);
	}
	moveQ39(arr, N, k);
	printf("After move:\n");
	for (i = 0; i < N; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}