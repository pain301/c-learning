#include <stdio.h>

int main(){
	char c;
	while((c = getchar())!=EOF){
		printf("c = %c\n",c);
	}
	return 0;
}
