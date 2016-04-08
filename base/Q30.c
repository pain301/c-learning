char *Question30 = "Q30:请编写一个函数fun，它的功能是：求除一个2×m整型二维数组中最大元素的值，并将此值返回调用函数。";

#include "head.h"

void Q30()
{
	puts(Question30);
	int num[2][10], i, j;
	srand(time(NULL));
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 10; ++j){
			num[i][j]=rand()%100;
		}
	}
	int max = num[0][0];
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 10; ++j){
			if (num[i][j]>max){
				max = num[i][j];
			}
		}
	}
	printf("The matrix is :\n");
	for (i = 0; i < 2; ++i){
		for (j = 0; j < 10; ++j){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	printf("It's max numbers is: %d\n",max);
}