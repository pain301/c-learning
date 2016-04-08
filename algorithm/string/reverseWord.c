#include <stdio.h>

void reverseWord(char *,char *);

void reverseWordInString(char *str){
	if(str==NULL)
		return ;
	char *p = str;
	while(*p){
		while(*p==' '){
			p++;
		}
		char *q = p;
		while(*q!=' '&&*q!='\0'){
			q++;
		}
		--q;
		reverseWord(p,q);
		p = q+1;
	}
}

void reverseWord(char *p,char *q){
	while(p<q){
		*p = *p^*q;	
		*q = *p^*q;	
		*p = *p^*q;
		p++;
		q--;
	}
}

int main(){
	char buf[100];
	while(gets(buf)!=NULL){
		reverseWordInString(buf);
		printf("After reverse:\n");
		printf("%s\n",buf);
	}
	return 0;
}
