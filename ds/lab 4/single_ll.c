#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *CreateNode(int value)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    NewNode->data = value;
    NewNode->next = NULL;
    return NewNode;
}

void InsertAtBeg(int value)
{
    struct node *NewNode = CreateNode(value);
    NewNode->next = head;
    head = NewNode;
}

void InsertAtEnd(int value)
{
    struct node *NewNode = CreateNode(value);

    if (head == NULL)
    {
        head = NewNode;
        return;
    }
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NewNode;
}

void InsertAtPos(int value, int pos)
{
    if (pos < 0)
    {
        printf("Wrong Pos !!\n");
        return;
    }
    if (pos == 0)
    {
        InsertAtBeg(value);
        return;
    }
    struct node *ptr = head;
    for (int i = 0; i < pos - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
    {
        printf("wrong index !!\n");
        return;
    }
    struct node *NewNode = CreateNode(value);
    NewNode->next = ptr->next;
    ptr->next = NewNode;
}

void DeleteFromBeg()
{
    if (head == NULL)
    {
        printf("\nEmpty List !!!");
        return;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}

void DeleteFromEnd()
{
    if (head == NULL)
    {
        printf("\nEmpty List !!!");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        return;
    }
    struct node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void DeleteByVal(int value)
{
    if (head == NULL)
    {
        printf("\nEmpty List !!!");
        return;
    }
    struct node *ptr = head;
    while (ptr->next != NULL && ptr->next->data != value)
    {
        ptr = ptr->next;
    }
    struct node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}


void Search(int value){
    int count = 0;
    struct node *ptr = head;
    while(ptr -> next != NULL){
        if(ptr -> data == value){
            printf("%d is found at position %d", value,count);
        }
        count++;
        ptr = ptr -> next;
    }
}

void Display() // Displaying the list
{
    int count = 0; // counting total nodes
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (ptr != NULL) 
    {
        printf("%d -> ", ptr->data);
        count++; // increasing count by one
        ptr = ptr->next;
    }
    printf("END\n");
    printf("Total number of nodes : %d",count);
}

int main() 
{
    int choice = 0, value, position;
    while (choice != 9) 
    {
        printf("\n\n************ MAIN MENU ************");
        printf("\n1 : Add a node at Beginning");
        printf("\n2 : Add a node at the End");
        printf("\n3 : Enter node at given position");
        printf("\n4 : Delete a node from the Beginning");
        printf("\n5 : Delete a node from the End");
        printf("\n6 : Enter value to be deleted");
        printf("\n7 : Display the Linked List");
        printf("\n8 : Search the value in linked list");
        printf("\n9 : END the Operation !!!");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: // calling InsertAtBeg(value) function to add a node in the Beginning of the LL
                printf("Enter Value to Add : ");
                scanf("%d", &value);
                InsertAtBeg(value);
                printf("\nNode Added at the beginning.");
                break;

            case 2: // calling InsertAtEnd(value) function to add a node in the End of the LL
                printf("Enter Value to Add : ");
                scanf("%d", &value);
                InsertAtEnd(value);
                printf("\nNode Added at the end.");
                break;

            case 3:
                printf("Enter the value to be added: ");
                scanf("%d", &value);
                printf("\nEnter the position of element: ");
                scanf("%d", &position);
                InsertAtPos(value, position);
                printf("\nnode added at the %d", position);
                break;

            case 4: // calling DeleteFromBeg() function to delete a node from the Beginning of the LL
                DeleteFromBeg();
                printf("\nNode Deleted from the Beginning.");
                break;

            case 5: // calling DeleteFromEnd() function to delete a node from the End of the LL
                DeleteFromEnd();
                printf("\nNode Deleted from the End.");
                break;

            case 6:
                printf("Enter the value to be deleted: ");
                scanf("%d", &value);
                DeleteByVal(value);
                printf("\nNode with value %d deleted", value);
                break;

            case 7: 
                printf("\nLinked List: ");
                Display();
                break;

            case 8:
                printf("Enter the value to be searched: ");
                scanf("%d", &value);
                Search(value);
                break;

            case 9: // exiting from the program
                printf("\nExit !!!");
                break;

            default:
                printf("\nInvalid option. Try again.");
                break;
        }
    }
    return 0;
}
