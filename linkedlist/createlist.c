struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation error\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list by taking user input
struct Node* createNodes() {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    int length;
    printf("Enter the length of the linked list: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid length. Exiting.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the characters for the linked list:\n");

    for (int i = 0; i < length; i++) {
        char data;
        printf("Node %d data: ", i + 1);
        scanf(" %c", &data); // Note the space before %c to consume the newline character

        struct Node* newNode = createNode(data);

        if (head == NULL) {
            // First node in the list
            head = newNode;
            tail = newNode;
        } else {
            // Add the new node to the end of the list
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%c ", current->data);
        current = current->next;
    }
    printf("\n");
}
