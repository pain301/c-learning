#include <stdio.h>

void reverse(char *p,char *q){
	while(p<q){
		*p = *p^*q;
		*q = *p^*q;
		*p = *p^*q;
		p++;
		q--;
	}
}

void reverseString(char *str){
	if(str==NULL)
		return ;
	char *p = str;
	char *q = str;
	while(*q){
		q++;
	}
	--q;	
	//先倒置整个字符串	
	reverse(p,q);
	while(*p){
		while(*p==' '){
			++p;
		}
		q = p;
		while(*q!=' '&&*q!='\0'){
			q++;
		}
		--q;
		//倒置每一个单词
		reverse(p,q);
		p = q + 1;
	}
}

int main(){
	char buf[100];
	while(gets(buf)!=NULL){
		reverseString(buf);
		printf("After reverse:\n");
		printf("%s\n",buf);
	}
	return 0;
}
