#include <stdio.h>

int main(){
	int num;
	scanf("Hello%d",&num);
	printf("%d\n",num);
	//都是4个字节
	printf("%d\n",sizeof('\1022223301'));
	printf("%d\n",sizeof('c'));
	return 0;
}
