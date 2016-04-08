#include <stdio.h>

int main(){
	char buf[20];
	while(gets(buf)!=NULL){
		printf("buf = %s\n",buf);
	}
	return 0;
}
