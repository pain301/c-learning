char *Question95 = "Q95: �ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ʹ�ַ�����ǰ��*�Ų��ö���n����������n������ɾ�����ڵ�*�ţ������ڻ����n������ʲôҲ�������ַ����м��β����*�Ų�ɾ����";
/*�������ݣ�******char***dao***  */

#include "head.h"

char* findPosition(char *str,int n)
{
	char *p = str;
	int count = 0;
	if (*p == '*'){
		while (*p!=0&&*p == '*'&&count!=n){
			++p;
			++count;
		}
		if (count == n){
			return p;
		}
	}
	return NULL;
}

void Q95()
{
	puts(Question95);
	char str[STR_LEN];
	int n;
	printf("Please input a string:\n");
	gets(str);
	printf("Please input the number of '*' in the begining of string that you want to delete:\n");
	scanf("%d", &n);
	char *p, *q;
	p = findPosition(str,n);
	if (p){
		while (*p != 0){
			*(p - n) = *p;
			++p;
		}
		*(p - n) = 0;
	}
	printf("After delete '*':\n");
	puts(str);
}