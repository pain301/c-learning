#include <stdio.h>

int main(){
	char str[50];
	sprintf(str,"%s","hello");	
	printf("%s\n",str);
	sprintf(str,"%s%s","hi","pain");
	printf("%s\n",str);
	sprintf(str,"%c%c%c",'a','b','c');
	printf("%s\n",str);
	//取前6个字符
	sprintf(str,"%.6s","pick up");
	printf("%s\n",str);
	return 0;
}
