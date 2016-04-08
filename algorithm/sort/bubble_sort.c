#include <stdio.h>
#include <time.h>

void swap(int *,int *);

void bubbleSort(int *a,int n){
	int i = 0;
	int j;
	//是否发生至少一次交换
	int swapFlag;
	for(;i<n;i++){
		swapFlag = 0;
		for(j = 0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a+j,a+j+1);
				swapFlag = 1;
			}	
		}
		if(!swapFlag)
			break;
	}
}

void swap(int *a,int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

int main(){
	int data[10];
	srand(time(NULL));
	int i = 0;
	for(;i<100;i++){
		data[i] = rand()%300;
	}
	for(i=0;i<10;i++)	
		printf("%d ",data[i]);
	printf("\n");
	printf("after sorted\n");
	bubbleSort(data,10);
	for(i=0;i<10;i++)	
		printf("%d ",data[i]);
	printf("\n");
	return 0;	
}
