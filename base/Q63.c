char *Question63 = "Q63:请编写一个函数fun，它的功能是：计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。";

#include "head.h"

void factorAdd(int n)
{
	int i, sum = 0;
	printf("%d=", n);
	for (i = 2; i < n; ++i){
		while (n != i){
			if (n%i == 0){
				printf("%d*", i);
				sum += i;
				n /= i;
			}
			else{
				break;
			}
		}
	}
	printf("%d\n", n);
	sum += n;
	printf("Factor's sum is :%d\n", sum);
}

void Q63()
{
	puts(Question63);
	int n;
	printf("Please enter a number:\n");
	while (scanf("%d", &n) != EOF){
		factorAdd(n);
	}
}