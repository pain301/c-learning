#include <stdio.h>

struct bit{
	unsigned char a:2;
	char b:2;
};

int main(){
	printf("sizeof struct :%d\n",sizeof(struct bit));
	return 0;
}

