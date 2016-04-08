#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LinkStack{
	ElemType data;
	struct LinkStack *next;
}LinkStack;

void initStack(LinkStack **s){
	*s = malloc(sizeof(struct LinkStack));
	if(s==NULL){
		printf("malloc error\n");
		exit(-1);
	}
	(*s)->next = NULL;
	(*s)->data = 0;
}

void push(LinkStack *s ,ElemType e){
	LinkStack *tmp = malloc(sizeof(struct LinkStack));
	if(tmp==NULL){
		printf("malloc error\n");
	}else{
		tmp->data = e;
		tmp->next = s->next;
		s->next = tmp;
	}
}

void pop(LinkStack *s,ElemType *e){
	if(s->next==NULL){
		printf("LinkStack empty\n");
	}else{
		LinkStack *node = s->next;
		*e = node->data;
		s->next = node->next;
		free(node);
	}
}

int isEmpty(LinkStack *s){
	if(s->next==NULL)
		return 1;
	else
		return 0;
}

void getTop(LinkStack *s,ElemType *e){
	if(s->next==NULL){
		printf("LinkStack empty\n");
		return ;	
	}else{
		LinkStack *node = s->next;
		*e = node->data;		
	}
}

int main(){
	LinkStack *head = NULL;
	initStack(&head);
	ElemType e;
	while(scanf("%d",&e)!=EOF){
		push(head,e);
	}
	while(!isEmpty(head)){
		pop(head,&e);
		printf("%d ",e);
	}
	puts("");
	return 0;
}
