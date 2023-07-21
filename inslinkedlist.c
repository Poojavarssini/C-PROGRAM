
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

}*head=NULL,*temp,*newnode;
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

void create()
{
    int n;
    printf("\nNo.of nodes: ");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;

        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }

    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;

    }
}

void insertfirst ()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to insert 1st");
    scanf("%d",&newnode->data);
    temp = newnode;
    newnode->next=head;
    head=newnode;
}

void insertlast ()
{

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to insert last");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

void insertmiddle()
{
     int position, i;
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("Memory allocation failed");
        return;
    }
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head == NULL) {
        head = newnode;
        return;
    }
    printf("Enter position to insert: ");
    scanf("%d", &position);
    if(position == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }
    temp = head;
    for(i = 1; i < position - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }
    if(i != position - 1) {
        printf("Invalid position\n");
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}


void deleteFirst() {
    struct node *temp;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
}


void deleteLast() {
    struct node *temp, *prev;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    if(head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    temp = head;
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}


void deleteAtPosition() {
    int position, i;
    struct node *temp, *prev;
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Enter position to delete: ");
    scanf("%d", &position);
    if(position == 1) {
        temp = head;
        head = head->next;
        free(temp);
        return;
    }
    temp = head;
    for(i = 1; i < position && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("Invalid position\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}
