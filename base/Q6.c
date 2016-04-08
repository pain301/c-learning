char *Question6 = "Q6:请编写一个函数void fun(char a[],char[],int n),其功能是：删除以各字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。";

#include<stdio.h>
#include<string.h>

void str_copy(char a[], char b[], int n)
{
	char *ap = a, *bp = b, i = 0;
	while (*ap != '\0')
	{
		if ((i++) != n)
			*(bp++) = *ap;/*a的指针指向要删除的位置时，a的指针仍需要往后移动一位，b的指针不需要移动*/
		++ap;
	}
	*bp = '\0';
}

void Q6()
{
	puts(Question6);
	char a[1000], b[1000];
	int i;
	printf("Please input a string:\n");
	gets(a);
	printf("Please input the position of charator you want to delete:");
	scanf("%d", &i);
	while (i <= 0 || i > strlen(a))/*当输入的位置不正确时*/
	{
		printf("The position is wrong,please input again:");
		scanf("%d", &i);
	}
	str_copy(a, b, i - 1);/*根据数组的特点，位置需减一才能和下标想吻合*/
	printf("The result is:\n");
	puts(b);
	return 0;
}