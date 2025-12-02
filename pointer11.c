#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insert(struct Node **head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;   
    *head = newNode;         
}

void deleteAtIndex(struct Node **head, int index) {
    if (*head == NULL || index < 0) {
        printf("Invalid index or empty list.\n");
        return;
    }
    struct Node *current = *head;
    struct Node *previous = NULL;
    if (index == 0) {
        *head = current->next;
        free(current);
        return;
    }
    for (int i = 0; i < index && current != NULL; i++) {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        printf("Index %d out of range.\n", index);
        return;
    }
    previous->next = current->next;
    free(current);
}

void printList(struct Node *head) {
    struct Node *ptr = head;
    printf("List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next; 
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;  
    insert(&head, 30);
    insert(&head, 20);
    insert(&head, 10);
    printList(head); 
    deleteAtIndex(&head, 2);
    printList(head);
    return 0;
}

