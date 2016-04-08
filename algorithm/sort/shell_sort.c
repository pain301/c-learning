#include <stdio.h>
#include <time.h>

void swap(int *,int *);

void swap(int *a,int *b){
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

void shell_insert(int *a,int n,int d){
	int i = d;
	for(;i<n;i++){
		int tmp = a[i];
		int j = i-d;
		while(j>=0&&a[j]>tmp){
			a[j+d] = a[j];
			j-=d;
		}
		a[j+d] = tmp;
	}
}

void shell_sort(int *a,int n){
	int d = n/2;
	while(d>=1){
		shell_insert(a,n,d);
		d/=2;
	}
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
	shell_sort(data,10);
	for(i=0;i<10;i++)	
		printf("%d ",data[i]);
	printf("\n");
	return 0;	
}
