char *Question73 = "Q73:�ٶ�������ַ�����ֻ������ĸ��*�ţ����д����fun�����Ĺ����ǣ������ַ���ǰ����β����*��֮�⣬����������*��ȫ��ɾ�����β�h��ָ���ַ�����һ���ַ����β�p��ָ���ַ��������һ����ĸ���ڱ�д����ʱ������ʹ��c�����ṩ���ַ���������";

/*�������ݣ�***wangdao***shenzhen*** */

#include "head.h"

char* firstAlphabet(char *str)
{
	if (*str == '*'){
		while (*str != 0 && *str=='*'){
			++str;
		}
		if (*str == 0){
			return NULL;
		}
	}
	return str;
}

char* lastAlpahbet(char *str)
{
	int flag = 0;
	char *p;
	while (*str != 0){
		if(*str == '*'){
			if (!flag){
				flag = 1;
				p = str-1;
			}
		}
		else{
			if (flag){
				flag = 0;
			}
		}
		++str;
	}
	if (flag){
		return p;
	}
	else{
		return str - 1;
	}
}

void Q73()
{
	puts(Question73);
	char str[STR_LEN];
	printf("Please input a string(begin with '*'��end with '*'and there also some '*' in the middle):");
	gets(str);
	char *h, *e, *p;
	h = firstAlphabet(str);
	if (!h){
		printf("Your string is shouldn't all '*'.\n");
		exit(1);
	}
	e = lastAlpahbet(str);
	while (h != e){
		if (*h == '*'){
			p = h;
			while (*(p + 1) != 0){
				*p = *(p + 1);
				++p;
			}
			*p = 0;
			--e;
		}
		else{
			++h;
		}
	}
	printf("After delete the '*' in the middle of string:\n");
	puts(str);
}