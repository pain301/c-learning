char *Question45 = "Q45:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ�ֻɾ���ַ���ǰ����β����*�ţ�������ĸ֮���*�Ŷ���ɾ�����β�n �������ַ����ĳ��ȣ��β�h�������ַ�����ǰ��*�ŵĸ������β�e�������ַ���������*�������ڱ�дʱ����ʹ��c���Ը��ṩ���ַ���������";

/*�������ݣ�*****qwertyuiop***asdfghjkl***** */

#include "head.h"

void delCharQ45(char *str, int n, int h, int e)
{
	char *p = str;
	int i = 0, newLength = n - h - e;
	for (i = 0; i<newLength; ++i){
		str[i] = str[i + h];
	}
	str[newLength] = '\0';
}

void statisticStr(char *str, int *n, int *h, int *e)
{
	*n = strlen(str);
	char *p = str;
	*h = 0;
	while (*p == '*'){
		++(*h);
		++p;
	}
	while (*p != 0){
		++p;
	}
	--p;
	*e = 0;
	while (*p == '*'){
		++(*e);
		--p;
	}
}
void Q45()
{
	puts(Question45);
	puts(input_a_string);
	char str[STR_LEN];
	gets(str);
	int n, h, e;
	statisticStr(str, &n, &h, &e);
	delCharQ45(str, n, h, e);
	printf("n:%d h:%d e:%d", n, h, e);
	printf("After delete:\n");
	puts(str);
	return 0;
}