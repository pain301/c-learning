#include <stdio.h>
#include <stdlib.h>

#define STACK_INIT_SIZE 4 

typedef int ElemType;

typedef struct SeqStack{
	ElemType *base;
	int top;
	int length;	
}SeqStack;

void initSeqStack(SeqStack *s){
	s->base = malloc(STACK_INIT_SIZE*sizeof(ElemType));
	if(s->base==NULL){
		printf("malloc failed\n");
		exit(-1);
	}
	s->top = 0;
	s->length = STACK_INIT_SIZE;
}

void push(SeqStack *s,ElemType e){
	if(s->top==s->length){
		//注意
		s->base = realloc(s->base,(s->length+s->length/2)*sizeof(ElemType));
		if(s->base==NULL){
			printf("realloc failed\n");
			exit(-1);
		}
		s->base[s->top++] = e;
		s->length = s->length+s->length/2;
	}else{
		s->base[s->top++] = e;
	}
}

void pop(SeqStack *s,ElemType *e){
	if(s->top==0){
		printf("stack empty\n");
	}else{
		--s->top;
		*e = s->base[s->top];
	}
}

void getTop(SeqStack *s,ElemType *e){
	if(s->top==0){
		printf("getTop error\n");
		return ;
	}
	*e = s->base[s->top-1];
}

int isEmpty(SeqStack *s){
	if(s->top==0)
		return 1;
	else
		return 0;		
}

int main(){
	SeqStack s;
	initSeqStack(&s);
	ElemType e;
	while(scanf("%d",&e)!=EOF){
		push(&s,e);
	}
	while(!isEmpty(&s)){
		pop(&s,&e);
		printf("%d ",e);
	}
	puts("");
	return 0;
}
