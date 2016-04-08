#include <stdio.h>
#include <string.h>

int main(){
	char str1[10] = {0};
	char str2[10] = "hello";
	strcat(str1,str2);
	printf("str1 = %s\n",str1);
	return 0;
}
