#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
    struct node * pre;
}NODE;
InsertLt(NODE **head,NODE *node){
    if(*head == NULL){
        (*head) = node;
        (*head)->next=NULL;
        (*head)->pre=NULL;
    }else{
        node->next = *head;
        (*head)->pre=node;
        (*head) = node;
        (*head)->pre = NULL;
    }
}
PerBubble(NODE *head,NODE*node){
    NODE * tmp,*p;
    int n;
    for(tmp=head;tmp!=node;tmp=tmp->next){
       if(tmp->next == NULL) break;
       if(tmp->data > tmp->next->data){
           n=tmp->data;
           tmp->data = tmp->next->data;
           tmp->next->data = n;
       }
    }
}
BubbleSort(NODE*head){
    NODE *tmp=NULL;
    for(tmp=head;tmp->next!=NULL;){
        PerBubble(head,tmp);
    }
}
int main(){
    int n;
    NODE *head=NULL;
    NODE *tmp,*p;
    while(1){
        scanf("%d",&n);
        printf("输入了:%d",n);
        if(n<0) {
            printf("end of input");
            break;
        }
        tmp = (NODE*) malloc(sizeof(tmp));
        memset(tmp,0x00,sizeof(tmp));
        tmp->data=n;
        tmp->next=NULL;
        tmp->pre=NULL;
        InsertLt(&head,tmp);
    }
    BubbleSort(head);
    for(tmp=head;tmp!=NULL;){
       printf("%d\n",tmp->data);
       p=tmp;
       tmp=tmp->next;
       p->next=NULL;
       free(p);
    }
}
  
   
