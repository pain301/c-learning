#include <stdio.h>
#include <time.h>

void swap(int *,int *);

void binarySort(int *a,int n){
	int i = 1;
	int j;
	int tmp;
	int low,middle,high;
	for(;i<n;++i){
		tmp = a[i];
		low = 0;
		high = i-1;
		while(low<=high){
			middle = (low+high)/2;
			if(tmp<a[middle])
				high = middle-1;
			else
				low = middle+1;//出现相同数字，插入到所有相同数字的尾部
		}
		for(j=i-1;j>high;--j){
			a[j+1] = a[j];
		}
		a[low] = tmp;
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
	binarySort(data,10);
	for(i=0;i<10;i++)	
		printf("%d ",data[i]);
	printf("\n");
	return 0;	
}
