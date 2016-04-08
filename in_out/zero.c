#include <stdio.h>

int main(){
	//等同于0
	printf("%c,%d\n",'\0','\0');
	printf("%c,%d\n",0,0);
	printf("%c,%d\n",'0','0');
	return 0;
}
