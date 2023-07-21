#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*temp;
struct node *head;

void insertfront ();
void insertend ();
void insertpos();
void deletefront();
void deleteend();
void deletepos();
void display();
void search();
void main ()
{
    int choice ;
    while(1)
    {
       // printf("Enter your option: ");
        printf("\n1.Insert in insertfront \n 2.Insert at last\n3.Delete at front\n 4.Delete at end\n 5.Search for an element\n 6.Show\n 7.Exit\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
           insertfront();
            break;
            case 2:
           insertend();
            break;
            case 3:
            deletefront();
            break;
            case 4:
            deleteend();
            break;
            case 5:
            search();
            break;
            case 6:
            display();
            break;
            case 7:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}
void insertfront()
{
    int item;
  newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the node data");
        scanf("%d",&item);
      newnode -> data = item;
        if(head == NULL)
        {
            head = newnode;
            newnode -> next = head;
        }
        else
        {
            temp = head;
            while(temp->next != head)
                temp = temp->next;
          newnode->next = head;
            temp -> next = newnode;
            head = newnode;
        }
        printf("\nnode inserted\n");
    }

}
void insertend()
{

    int item;
   newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter Data?");
        scanf("%d",&item);
       newnode->data = item;
        if(head == NULL)
        {
            head =newnode;
           newnode-> next = head;
        }
        else
        {
            temp = head;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = newnode;
           newnode-> next = head;
        }

        printf("\nnode inserted\n");
    }

}

void deletefront()
{

    if(head == NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }

    else
    { newnode = head;
        while(newnode -> next != head)
           newnode =newnode -> next;
         newnode->next = head->next;
        free(head);
        head = newnode->next;
        printf("\nnode deleted\n");

    }
}
void deleteend()
{
    struct node  *preptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");
    }
    else if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");

    }
    else
    {
       newnode= head;
        while(newnode ->next != head)
        {
            preptr=newnode;
            newnode = newnode->next;
        }
        preptr->next =newnode -> next;
        free(newnode);
        printf("\nnode deleted\n");

    }
}

void search()
{
    struct node *newnode;
    int item,i=0,flag=1;
   newnode = head;
    if(newnode == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&item);
        if(head ->data == item)
        {
        printf("item found at location %d",i+1);
        flag=0;
        }
        else
        {
        while (newnode->next != head)
        {
            if(newnode->data == item)
            {
                printf("item found at location %d ",i+1);
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            i++;
            newnode =newnode -> next;
        }
        }
        if(flag != 0)
        {
            printf("Item not found\n");
        }
    }

}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\nnothing to print");
    }
    else
    {
        printf("\n printing values ... \n");

        while(ptr -> next != head)
        {

            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }

}
