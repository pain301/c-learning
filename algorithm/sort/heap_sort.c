#include <stdio.h>
#include <time.h>

void swap(int *,int *);

void heapInsert(int *a,int low,int high){
	int i = low;
	int j = low*2;
	int tmp = a[i];
	while(j<=high){
		if(j+1<=high&&a[j]<a[j+1])	
			++j;
		if(a[j]>tmp){
			a[i] = a[j];
			i = j;
			j = i*2;
		}else
			break;
	}
	a[i] = tmp;
}

void heapSort(int *a,int n){
	int i = n/2;
	//建立大顶堆
	for(;i>=0;--i){
		heapInsert(a,i,n-1);
	}
	//大顶堆的调整
	//每次将最大值放在数组尾部
	for(i=n-1;i>0;--i){
		swap(a+i,a);
		heapInsert(a,0,i-1);
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
	heapSort(data,10);
	for(i=0;i<10;i++)	
		printf("%d ",data[i]);
	printf("\n");
	return 0;	
}
