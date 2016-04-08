#include "myStrHead.h"

int myStrcmp(char *str1,char *str2){
	if(str1==NULL||str2==NULL)
		return 0;
	while(*str1&&*str2){
		if(*str1>*str2)
			return 1;
		else if(*str1<*str2)
			return -1;
		++str1;
		++str2;
	}
	if(*str1)
		return 1;
	else if(*str2)
		return -1;
	else
		return 0;
}
