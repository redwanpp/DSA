#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node NODE;

struct node {
    char data;
    NODE *next;
};

NODE *head = NULL;

NODE *create_node(char item);
void big_insert(char item);
void last_insert(char item);
void random_insert(char item, char prev_data);
void big_delete();
void last_delete();
void random_delete(char del_item);
void display();
void search(char search_item);

int main() {
    big_insert('D');
    display(); 
    big_insert('E');
    display();
    big_insert('R');
    display();
    last_insert('W');
    display();
    last_insert('N');
    display();
    random_insert('A', 'W');
    display();
    
    // big_delete();
    // display();
    // big_delete();
    // display();
    // big_delete();
    // display();
    // big_delete();
    // display();
    // big_delete();
    // display();
    // big_delete();
    // display();
    // big_delete();
    // display();    

    // big_delete();
    // display();    
    // big_delete();
    // display();    
    // big_delete();
    // display();    

    // last_delete();
    // display();
    // last_delete();
    // display();
    // last_delete();
    // display();
    // last_delete();
    // display();

    random_delete('W');
    display();
    random_delete('W');
    display();

    search('D');

    return 0;
}

NODE *create_node(char item) {
    NODE *new_node = (NODE*)malloc(sizeof(NODE));

    if(new_node == NULL) {
        printf("ERROR!\n");
        exit(0);
    }

    new_node->data = item;
    new_node->next = NULL;

    return new_node;
}

void big_insert(char item) {
    NODE *current_node = create_node(item);

    if(head == NULL) {
        head = current_node;
    }
    else {
        current_node->next = head;
        head = current_node;
    }
}

void last_insert(char item) {
    NODE *current_node = create_node(item);

    if(head == NULL) {
        head = current_node;
    }
    else {
        NODE *temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = current_node;
    }
    
    
}

void random_insert(char item, char prev_data) {
    NODE *current_node = create_node(item);

    if(head == NULL) {
        head = current_node;
    }
    else {
        NODE *temp = head;

        while(temp->data != prev_data) {
            temp = temp->next;
        }

        current_node->next = temp->next;
        temp->next = current_node;
    }
}

void big_delete() {
    if(head == NULL) {
        printf("Data underflow\n");
    }
    else {
        head = head->next;
    }
}

void last_delete() {
    NODE *temp = head;
    if(temp == NULL) {
        printf("Data underflow!\n");
    }
    else if(temp->next == NULL){
        head = NULL;
    }
    else {
        while(temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
    }
}

void random_delete(char del_item) {
    bool flag = true;
    if(head == NULL) {
        printf("Data underflow!\n");
    }
    else {
        NODE *temp = head;
        NODE *prev;

        while(temp->next != NULL) {
            if(temp->data == del_item) {
                prev->next = temp->next;
                flag = false;
                break;
            }
            prev = temp;
            temp = temp->next;
        }  
    }

    if(flag) {
        printf("Data is not available in the list\n");
    }
}


void search(char search_item) {
    NODE *temp = head;
    bool flag = true;

    if(head == NULL) {
        printf("There are no data availabe in list\n");
    }
    else {
        while(temp != NULL) {
            if(temp->data == search_item) {
                printf("Data %c is found at address  %x\n", temp->data, temp->next);
                flag == false;
                break;
            }
            temp = temp->next;
        }
    }
    if(flag) {
        printf("Data is not found!\n");
    }
}

void display() {
    NODE *temp = head;

    
    while (temp != NULL) {
        printf("[%X]----->[%c]", temp, temp->data);
        temp = temp->next;
    }
    printf("[NULL]\n\n\n");
}

// void display() {
//     NODE *temp = head;

    
//     while (temp != NULL) {
//         printf("%c", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }