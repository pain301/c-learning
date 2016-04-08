#include "myStrHead.h"

char *myStrcpy(char *str1,const char *str2){
	if(str1==NULL||str2==NULL)
		return str1;
	while(*str2){
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return str1;
}
