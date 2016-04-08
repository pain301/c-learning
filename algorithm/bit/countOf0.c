#include <stdio.h>

int countOf0InBinary1(int num){
	int i = 0;
	while(num){
		//必须加上括号
		if((num&1)==0){
			i++;
		}
		num = num>>1;
	}
	return i;
}

int countOf0InBinary2(int num){
	int i = 0;
	//按32位计算
	while(num+1){
		//将num最右边的0变为1
		num = num|(num+1);
		i++;
	}
	return i;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("count of 0 in %d is %d\n",n,countOf0InBinary2(n));
	}
	return 0;
}
