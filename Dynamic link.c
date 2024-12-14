#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *next;
};

struct Node *start;

struct Node* getnode() {
    struct Node* p;
    p = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value of the linked list: ");
    scanf("%d", &(p->val));
    p->next = NULL;
    return p;
}

void show()
{
    struct Node *p = start;
    printf("The linked list is: \n");
    while (p != NULL)
    {
        printf("%d \t", p->val);
        p = p->next;
    }
}

int main()
{
    start = getnode();
    start->next = getnode();
    start->next->next = getnode();
    start->next->next->next = getnode();
    printf("The linked list created is:\n ");
    show();
    return 0;
}
