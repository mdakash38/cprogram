#include<stdio.h>
#include<stdlib.h>
 struct node{
 int data;
 struct node*next;
};
   int main(){
   struct node*head=NULL,*newnode=NULL,*temp=NULL;
   int n,value,i;
   printf("Enter number of node:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data for node%d:",i+1);
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
       head=newnode;
       temp=head;
    }
    else{
        temp->next=newnode;
        temp=newnode;
        }
   }
   temp=head;
   while(temp!= NUlL){
    printf("%d",temp->data);
    temp=temp->next;
   }

return 0;
}

