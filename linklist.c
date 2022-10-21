//write a program linklisttransversal
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != 0)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
     struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // linked first Node to secondlist
    head->data = 12;
    head->next = second;

    // linked secondlist into thirdlist
    second->data = 13;
    second->next = third;

    // linked thirdnode into fourth node
    third->data = 14;
    third->next = fourth;

    // linked fourth node into fifth node
    fourth->data = 15;
    fourth->next = fifth;

    // Terminating the sixth list
    fifth->data = 23;
    fifth->next = NULL;

    linkedlistTraversal(head);
    return 0;
}
