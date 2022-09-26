#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *ptr;
};

int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->num = 23;
    head->ptr = NULL;

    printf("%d\n", head->num);

    free(head);

    return 0;
}