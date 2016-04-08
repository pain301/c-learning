#include <stdio.h>

void wordCount1(char *str,int *n){
	*n = 0;
	if(str==NULL)	
		return ;
	int inWord = 0;
	while(*str){
		if(*str!=' '&&!inWord){
			++*n;	
			inWord = 1;
			printf("%c",*str);
		}else if(*str!=' '&&inWord){
			printf("%c",*str);
		}else if(*str==' '&&inWord){
			inWord = 0;
			printf("\n");
		}
		++str;
	}
}

void wordCount2(char *str,int *n){
	*n = 0;
	if(str==NULL){
		return ;
	}
	int endFlag = 0;
	while(*str){
		while(*str==' '){
			if(*(str+1)==0)
				endFlag = 1;
			str++;
		}
		while(*str!=' '&&*str!='\0'){
			putchar(*str);
			str++;
		}
		//判断是否以空格结尾
		if(!endFlag){
			puts("");
			++*n;
		}
	}
}

int main(){
	char buf[100];
	int len = 0;
	while(gets(buf)!=NULL){
		wordCount1(buf,&len);
		printf("number of word in str is %d\n",len);
	}
	return 0;
}
