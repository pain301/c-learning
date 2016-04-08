#include <stdio.h>

int count1InBinary1(int num){
	int i = 0;
	while(num){
		if((num&1)==1)
			i++;
		num = num>>1;
	}
	return i;
}

int count1InBinary2(int num){
	int i = 0;
	while(num){
		num = num&(num-1);
		i++;
	}
	return i;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("count 1 in %d is %d\n",n,count1InBinary2(n));
	}
	return 0;
}
