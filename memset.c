#include <stdio.h>
#include <string.h>

int main(){
	int a[5];
	memset(a,-1,sizeof(a));
	int i = 0;
	for(;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
