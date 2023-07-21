#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*prev;
}*head,*prev,*newnode,*nextnode;

int main()
{
    printf("1.Create\n 2.display \n 3.insertfirst \n 4.insertinlast \n 5.insertinmiddle  \n 6.deletefirst \n 7.deletelast \n 8.deletepostion");
    while(1)
    {
        int option;
        printf("\nOption is: ");
        scanf("%d",&option);
        switch (option)
        {
        case 1 :
            create ();
            break;
        case 2 :
            display ();
            break;
        case 3:
            insertfirst();
            break;

         case 4 :
            insertlast();
            break;

         case 5:
            insertmiddle();
            break;
         case 6:
            deleteFirst();
            break;
         case 7 :
            deleteLast();
            break;
         case 8 :
            deleteAtPosition();
            break;
        }

    }
    return 0;
}

void create(){
    int n,i;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      newnode = (struct node*)malloc(sizeof(struct node));
      print("Enter the elements: ");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
      newnode->prev=NULL;
      if(head=NULL){
        head=newnode;
        temp= head;
      }
      else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
      }
    }
}


void display(){
    temp=head;
    printf("Displaythe elements:" );
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void insertfront()[
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode*prev =NULL;
    newnode*next =head;
    head->prev = newnode;
    head = newnode;
]

void insertend(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Insert at the end: ");
    int value;
    scanf("%d",&newnode->data );
    temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev =temp;
    newnode->next=NULL;

}
