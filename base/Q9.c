char *Question9 = "Q9:��дһ������fun�����Ĺ����ǣ��������¹�ʽ��p��ֵ������ɺ���ֵ���ء�M��nΪ��������������Ҫ��m>n�� p=m!/n!(m-n)!";

#include<stdio.h>

int factorial(int m)
{
	if (m == 1)
		return 1;
	else
		return m*factorial(m - 1);
}

int calculate_Q9(int m, int n)
{
	int temp;
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	//printf("%d,%d,%d\n", factorial(m), factorial(n),factorial(m - n));
	return factorial(m) / (factorial(n)*factorial(m - n));
}


void Q9()
{
	puts(Question9);
	int m, n;
	printf("Please input two numbers:");
	scanf("%d %d", &m, &n);
	printf("The result is:%d\n", calculate_Q9(m, n));
	return 0;
}