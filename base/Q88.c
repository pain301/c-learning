char *Question88 = "Q88:�ٶ�������ַ�����ֻ������ĸ��*�š����д����fun�����Ĺ����ǣ������ַ���ǰ����*��֮�⣬����������*��ȫ��ɾ�����ڱ�д������ʱ������ʹ��c�����ṩ���ַ���������";

#include "head.h"

char* firstAlphbetQ88(char *str)
{
	char *h = str;	
	if (*h == '*'){
		++h;
		while (*h=='*'){
			++h;
		}
		if (*h == 0){
			return NULL;
		}
	}
	return h;
}

void Q88()
{
	puts(Question88);
	char str[STR_LEN];
	printf("Please enter a string :\n");
	gets(str);
	char *p, *h = firstAlphbetQ88(str);
	if (!h){
		printf("Your string is shouldn't all of '*'\n");
		exit(0);
	}
	while (*h != 0){
		if (*h == '*'){
			p = h;
			while (*(p + 1) != 0){
				*p = *(p+1);
				++p;
			}
			*p = 0;
		}
		else{
			++h;
		}
	}
	printf("After delete the '*' : \n");
	puts(str);
}