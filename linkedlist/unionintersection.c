#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to find the union of two linked lists
struct Node* unionLists(struct Node* head1, struct Node* head2) {
    struct Node* unionHead = NULL;
    struct Node* current1 = head1;
    struct Node* current2 = head2;

    while (current1 != NULL && current2 != NULL) {
        if (current1->data < current2->data) {
            insertAtEnd(&unionHead, current1->data);
            current1 = current1->next;
        } else if (current1->data > current2->data) {
            insertAtEnd(&unionHead, current2->data);
            current2 = current2->next;
        } else {
            insertAtEnd(&unionHead, current1->data);
            current1 = current1->next;
            current2 = current2->next;
        }
    }

    // Append remaining elements from either list
    while (current1 != NULL) {
        insertAtEnd(&unionHead, current1->data);
        current1 = current1->next;
    }
    while (current2 != NULL) {
        insertAtEnd(&unionHead, current2->data);
        current2 = current2->next;
    }

    return unionHead;
}

// Function to find the intersection of two linked lists
struct Node* intersectionLists(struct Node* head1, struct Node* head2) {
    struct Node* intersectionHead = NULL;
    struct Node* current1 = head1;
    struct Node* current2 = head2;

    while (current1 != NULL && current2 != NULL) {
        if (current1->data == current2->data) {
            insertAtEnd(&intersectionHead, current1->data);
            current1 = current1->next;
            current2 = current2->next;
        } else if (current1->data < current2->data) {
            current1 = current1->next;
        } else {
            current2 = current2->next;
        }
    }

    return intersectionHead;
}

int main() {
    // Create sample linked lists
    struct Node* head1 = NULL;
    insertAtEnd(&head1, 1);
    insertAtEnd(&head1, 2);
    insertAtEnd(&head1, 4);
    insertAtEnd(&head1, 5);

    struct Node* head2 = NULL;
    insertAtEnd(&head2, 2);
    insertAtEnd(&head2, 3);
    insertAtEnd(&head2, 4);
    insertAtEnd(&head2, 6);

    printf("List 1: ");
    display(head1);
    printf("List 2: ");
    display(head2);

    // Union
    struct Node* unionHead = unionLists(head1, head2);
    printf("Union: ");
    display(unionHead);

    // Intersection
    struct Node* intersectionHead = intersectionLists(head1, head2);
    printf("Intersection:");
    display(intersectionHead);
}
