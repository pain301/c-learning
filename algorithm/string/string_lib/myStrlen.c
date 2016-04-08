#include "myStrHead.h"

int myStrlen(char *str){
	if(str==NULL)
		return 0;
	int num = 0;
	while(*str){
		++num;
		++str;
	}
	return num;	
}
