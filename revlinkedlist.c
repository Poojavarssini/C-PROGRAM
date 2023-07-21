#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* insertAtBeginning(struct Node* head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}
struct Node* reverseList(struct Node*head)
{
    struct Node *prev, *curr, *next;
    prev = NULL;
    curr = head;
    next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head=prev;
    return head;
}
void printList(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head=head->next;
    }
}
int main()
{
    struct Node* head=NULL;
    int n, i,next,data;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter data for node %d: ",i+1);
        scanf("%d", &data);
        head = insertAtBeginning(head, data);
    }
    head = reverseList(head);
    printf("Reversed Linked List: ");
    printList(head);
    printf("\n");
    return 0;
}
