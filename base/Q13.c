char *Question13 = "Q13:���дһ������void fun(int tt[m][n],int pp[n]),ttָ��һ��m��n�еĶ�ά�����飬�����ά������ÿ������СԪ�أ������η���pp��ָ��һά�����С���ά�����е��������������и��衣";


/*����������ݣ�56 82 35 31 26 86 62 15 27 93 21 5 17 64 53 16 76 101 66 36*/

#include<stdio.h>
#define m 5
#define n 4

void ministNumInColumn(int tt[m][n], int pp[n])
{
	int i, j, min;
	for (i = 0; i < n; ++i)
	{
		min = tt[0][i];
		for (j = 0; j < m; ++j)
		if (min>tt[j][i])
			min = tt[j][i];
		pp[i] = min;
	}
}

void Q13()
{
	puts(Question13);
	int i, j, num[m][n], min[n];
	printf("Please enter %d*%d numbers:\n", m, n);
	for (i = 0; i < m; ++i)
	for (j = 0; j < n; ++j)
		scanf("%d", *(num + i) + j);
	printf("The numbers in array are:\n");
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
			printf("%d ", num[i][j]);
		printf("\n");
	}
	ministNumInColumn(num, min);
	for (i = 0; i < n; ++i)
		printf("%d ", min[i]);
	printf("\n");
}