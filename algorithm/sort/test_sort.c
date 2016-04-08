#include <stdio.h>
#include <time.h>

#define N 10000

void initArray(int *arr){
	srand(time(NULL));
	int i = 0;
	while(i<N){
		arr[i++] = rand()%1000;
	}
}

void copyArray(int *des,int *src,int n){
	int i = 0;
	while(i<n){
		*(des+i) = *(src+i);
		++i;
	}
}

void printArray(int *a,int n){
	int i = 0;
	while(i<n){
		printf("%d ",*(a+i));
		++i;
	}
	puts("");
}

void swap(int *a,int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

void shellInsert(int *a,int n,int d){
	int i = d;
	for(;i<n;++i){
		int tmp = a[i];
		int j = i-d;
		while(j>=0&&a[j]>tmp){
			a[j+d] = a[j];
			j-=d;
		}
		a[j+d] = tmp;
	}
}

void shellSort(int *a,int n){
	int d;
	for(d = n/2;d>=1;d/=2){
		shellInsert(a,n,d);
	}
}

void quickSort(int *a,int low,int high){
	int tmp;
	int i;
	int j;
	if(low<high){
		i = low;
		j = high;
		tmp = a[low];
		while(i<j){
			while(i<j&&a[j]>tmp)
				--j;
			if(i<j){
				a[i] = a[j];
				++i;
			}
			while(i<j&&a[i]<tmp)
				++i;
			if(i<j){
				a[j] = a[i];
				--j;
			}
		}
		a[i] = tmp;
		quickSort(a,low,i-1);
		quickSort(a,i+1,high);
	}
}

void heapInsert(int *a,int low,int high){
	int i = low;
	int j = low*2;
	int tmp = a[low];
	while(j<=high){
		if(j+1<=high&&a[j+1]>a[j])
			++j;
		if(a[j]>tmp){
			a[i] = a[j];
			i = j;
			j *= 2;
		}else
			break;
	}
	a[i] = tmp;
}

void heapSort(int *a,int n){
	int i = n/2;
	for(;i>=0;--i){
		heapInsert(a,i,n-1);
	}
	for(i=n-1;i>0;--i){
		swap(a,a+i);
		heapInsert(a,0,i-1);
	}
}

void binarySort(int *a,int n){
	int i = 1;
	int j;
	int low,middle,high;
	int tmp;
	for(;i<n;++i){
		high = i-1;		
		low = 0;
		j = i - 1;
		tmp = a[i];	
		while(low<=high){
			middle = (low+high)/2;
			if(tmp<a[middle])	
				high = middle-1;
			else
				low = middle+1;
		}
		while(j>high){
			a[j+1] = a[j];
			--j;	
		}
		a[low] = tmp;
	}		
}

int compare(const void *a,const void *b){
	int *first = (int *)a;
	int *second = (int *)b;
	//从小到大
	if(*first>*second)
		return 1;
	else
		return -1;
}

int main(){
	int data1[N];
	int data2[N];	
	double start;
	double end;
	initArray(data1);
	copyArray(data2,data1,N);
	printf("排序之前\n");
	printArray(data1,N);
	printf("排序之后\n");
	
	start = clock();
	qsort(data2,N,sizeof(int),compare);
	//printArray(data2,N);
	end = clock();
	printf("qsort time: %lf\n",(end-start));
	
	copyArray(data2,data1,N);
	start = clock();
	shellSort(data2,N);
	//printArray(data2,N);	
	end = clock();
	printf("shellSort time: %lf\n",(end-start));

	copyArray(data2,data1,N);
	start = clock();
	quickSort(data2,0,N-1);
	//printArray(data2,N);
	end = clock();
	printf("quickSort time: %lf\n",(end - start));

	copyArray(data2,data1,N);
	start = clock();
	heapSort(data2,N);
	//printArray(data2,N);
	end = clock();
	printf("heapSort time: %lf\n",(end - start));

	copyArray(data2,data1,N);
	start = clock();
	binarySort(data2,N);
	//printArray(data2,N);
	end = clock();
	printf("binarySort time: %lf\n",(end - start));
	
	return 0;
}
