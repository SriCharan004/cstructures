#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to swap the next two elements in the linked list
void swapAdjacentNodes(struct Node* head) {
    struct Node* current = head;

    // Traverse the list and swap adjacent nodes
    while (current != NULL && current->next != NULL) {
        // Swap data of adjacent nodes
        char temp = current->data;
        current->data = current->next->data;
        current->next->data = temp;

        // Move to the next pair
        current = current->next->next;
    }
}
// Function to free the memory occupied by the linked list
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    // Create a sample linked list: A -> B -> C -> D
    struct Node* head = createNode('A');
    head->next = createNode('B');
    head->next->next = createNode('C');
    head->next->next->next = createNode('D');

    printf("Original linked list: ");
    printList(head);

    // Swap the next two elements
    swapNextTwo(head);

    printf("Linked list after swapping next two elements: ");
    printList(head);

    // Free memory
    freeList(head);

    return 0;
}
