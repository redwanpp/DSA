/*This is for basic operartion in stack. Like:
    1) interstion
    2) deletion
    3) printing*/

#include <stdio.h>

// #define size 5

int arr[5], top = -1;

void insert();
void printStack();
void del(int item);

int main() {
    insert();
    printStack();
    del(2);
    printStack();

    return 0;
}

void insert() {
    top++;
    while (top < 5) {
        scanf("%d", &arr[top]);
        top++;
    }
}

void del(int item) {
    int count = 0;
    while(1) {
        if(count == item) {
            break;
        }
        top--;
        count++;
    }
}

void printStack() {
    for(int i = top - 1; i > -1; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
