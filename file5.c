#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node*next;
}Node;
Node*createNode(int val){
    Node*newNode=(Node*)malloc(sizeof(Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}
int main(){
    Node*head=createNode(10);
    head->next=createNode(20);
    head->next->=createNode(30);
    Node*p=head;
    printf("链表遍历输出：");
    while(p!=NULL){
        printf("%d",p->data);
        p=p->next;
    }
printf("\n");
Node*cur=head;
while(cur!=NULL){
    Node*temp=cur;
    cur=cur->next;
    free(temp);
}
return 0;
}