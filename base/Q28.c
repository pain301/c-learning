char *Question28 = "Q28:请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。数组元素中的值已在主函数中赋予。主函数中x是数组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。";

#include<stdio.h>
#define M 10
void maxInArray(int x[], int n, int *max, int *index)
{
	int i;
	for (i = 1, *max = x[0], *index = 0; i < n; ++i){
		if (x[i]>*max){
			*max = x[i];
			*index = i;
		}
	}
}

void Q28()
{
	puts(Question28);
	int x[M], max, index, n, i;
	for (i = 0; i < M; ++i)
		scanf("%d", x + i);
	maxInArray(x, M, &max, &index);
	printf("The max number is %d , and it's position is %d.\n", max, index + 1);
	return 0;
}