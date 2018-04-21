#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct info {
	int num;
	struct info * next;
} node;
typedef struct List {
	node *head;//指向链表的头
	node *tail;//指向链表的尾//由其来操纵链表
} List;//我们List出另一个结构体，就可以构建另一个列表//List 是链表类型
//node *add(node *head,int num){
//	node *p=(node *)malloc(sizeof(node));
//	p->num=num;
//	p->next=head->next;
//	head->next=p;
//} 
//int main() {
//	int num;
//	node *head=(node *)malloc(sizeof(node)),*p;
//	head->next=NULL;
//	while(scanf("%d",&num)&&num!=-1){
//		head=add(head,num);
//	}
//	for(p=head->next;p;p=p->next){
//		printf("%d ",p->num);
//	}
//	return 0;
//}
void head_add(List *list,int num){
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	p->next=list->head->next;
	list->head->next=p;
}//头插时tail失去作用

void add(List *list,int num){
	node *p=(node *)malloc(sizeof(node));
	p->num=num;
	p->next=list->tail->next;//p->next=NULL;
	list->tail->next=p;
	list->tail=p;
}

int main(){
	List list;
	int num;
	node *p=(node *)malloc(sizeof(node));//空的头结点
	p->next=NULL;
	list.head=list.tail=p;
	while(scanf("%d",&num)&&num!=-1){
		head_add(&list,num);
	}
	for(p=list.head->next;p;p=p->next){
		printf("%d ",p->num);
	}
	return 0;
}

