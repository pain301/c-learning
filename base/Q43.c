char *Question43 = "Q43:��дһ���������Ӵ����num���ַ������ҳ�һ�����һ���ַ�������ͨ���β�ָ��max���ظô���ַ(��****��Ϊ��������ı�־)��";


#include "head.h"
#define M 100
#define N 100

void longestStr(char(*p)[N], int num, char *max)
{
	unsigned Maxlength = 0;
	int i;
	char *cl;
	for (i = 0; i < num; ++i){
		if (strlen(*(p + i))>Maxlength){
			cl = *(p + i);
			Maxlength = strlen(*(p + i));
		}
	}
	strcpy(max, cl);
}

void Q43()
{
	puts(Question43);
	char str[M][N];
	int i = 0;
	printf("Please enter some strings,end with ****.\n");
	while (strcmp(gets(str[i++]), "****") != 0);
	char max[N];
	longestStr(str, i, max);
	printf("The longese string among them is:\n");
	puts(max);
	return 0;
}