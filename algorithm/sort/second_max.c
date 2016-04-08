#include <stdio.h>

void find(int a[],int n,int *second){
	int max;
	int smax;
	if(a[0]>a[1]){
		max = a[0];
		smax = a[1];
	}else{
		max = a[1];
		smax = a[0];
	}
	int i = 2;
	for(;i<n;i++){
		if(a[i]>max){
			smax = max;
			max = a[i];
		}else if(a[i]<=max&&a[i]>=smax){
			smax = a[i];
		}
	}
	*second = smax;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i = 0;
	for(;i<n;i++){
		scanf("%d",&a[i]);
	}
	int second;
	find(a,n,&second);
	printf("second num is :%d\n",second);
	return 0;
}
