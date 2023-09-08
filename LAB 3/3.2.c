#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void addFirst(struct node **head,int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = *head;
    *head=newNode;
}
void printList(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL) {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void addLast(struct node **head,int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else{
        struct node *temp = *head;
        while( temp->next!= NULL)
        temp = temp->next;
    
    temp->next= newNode;
    }
}

void add(struct node**head,int val,int position)
{
    struct node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data = val;
    struct node*temp =*head;
    
    for(int i=1;i<position;i++){
        if(temp->next!=NULL){
            temp=temp->next;
        }
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteNode(struct node**head)
{ 
    struct node*temp;
    temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deletelast(struct node**head )
{
    struct node*temp;
    struct node*current =*head;
        while(current->next != NULL)
        {temp =current;
        current =current->next;
        }
    temp->next = NULL;
    free (current);

}
void delete(struct node **head,int position)
{
    struct node*temp;
    struct node*current=*head;
    for( int i=0;i<position;i++)
    {
        if(current->next!=NULL){
            temp =current;
            current =current->next;
            }
        temp->next=current->next;
        free(current);
        
    }
}

void count(struct node *head)
{
    int cout=0;
    struct node *temp=head;
    while(temp!=NULL) {
        cout=cout+1;
        temp = temp->next;
    }
    printf("Total number of nodes in the list is %d.",cout);
}

int main()
{
    int n;
    int data;
    struct node *head = NULL;
    
    printf("Enter numbers of nodes :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter the data for node %d :",i+1);
        scanf("%d",&data);
        addFirst(&head,data);
    }

    printf("test1");
    printList(head);

    while (1) {
        printf("\nMenu:\n");
        printf("a. Insert a node at beginning\n");
        printf("b. insert a node at last\n");
        printf("c. insert a node at specific position\n");
        printf("d. Deletion of a node at beginning\n");
        printf("e. Delete from end \n ");
        printf("f. Delete from any position\n");
        printf("g. count node\n");
        printf("h. Traverse the linked list\n");
        printf("i. Exit\n");

        char choice;
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':;
                int num1;
                printf("Enter the number to be inserted:");
                scanf("%d",&num1);
                addFirst(&head,num1);
                printList(head);
                break;
            case 'b':;
                int num2;
                printf("Enter the number to be inserted:");
                scanf("%d",num2);
                addLast(&head,num2);
                printList(head);
                
                break;                
            case 'c':;
                int num3;
                int position;
                printf("Enter the number to be inserted:");
                scanf("%d",&num3);
                printf("Enter the postion to insert:");
                scanf("%d",&position);
                add(&head,num3,position);
                printList(head);              
                break;
            case 'd':
                deleteNode(&head);
                printList(head);
                break;
            case 'e':
               deletelast(&head);
               printList(head);
               break;
            case 'f':;
                int pos;
                printf("Enter the position to delete node:");
                scanf("%d",&pos);
                delete(&head,pos);
                printList(head);
                break;
            case 'g':
               count(head);
            //    return 0;
               break;
            case 'h':
                printList(head);
                break;
            case 'i':
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

//    addFirst(&head,10);
//    addFirst(&head,20);
//    addFirst(&head,30);
//    printList(head);
   
//    addLast(&head,40);
//    addLast(&head,50);
//    addLast(&head,60);
//    addLast(&head,70);
//    addLast(&head,80);
//    addLast(&head,90);
//    add(&head,40,1);
//    printList(head);
//    deleteNode(&head);
//    deleteNode(&head);
//    printList(head);
//    deletelast (&head);
//    printList(head);
//    delete(&head,3);
//    printList(head);
   
    return 0;
}