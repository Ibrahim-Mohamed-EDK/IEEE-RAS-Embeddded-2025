#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Problem 1: Function to print the list and its length
void printList(struct Node* head) {
    int length = 0;
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
        length++;
    }
    printf("NULL\n");
    printf("Length: %d\n", length);
}

// Problem 2: Insert at end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

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

// Problem 2: Insert at beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Problem 2: Delete a specific node by value
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If head node holds the key
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present
    if (temp == NULL) return;

    // Unlink the node
    prev->next = temp->next;
    free(temp);
}

// Problem 3: Get node value at position (0-based index)
int getNodeValue(struct Node* head, int position) {
    int count = 0;
    struct Node* current = head;

    while (current != NULL) {
        if (count == position)
            return current->data;
        count++;
        current = current->next;
    }

    printf("Position out of range!\n");
    return -1; // Not found
}

// Problem 3: Insert node at specific position (0-based index)
void insertAtPosition(struct Node** head, int position, int data) {
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* current = *head;
    int count = 0;

    while (current != NULL && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Position out of range!\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

// Problem 4: Free the entire list
void freeList(struct Node** head) {
    struct Node* current = *head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

// Main function to test everything
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printList(head);

    insertAtBeginning(&head, 5);
    printList(head);

    deleteNode(&head, 20);
    printList(head);

    int value = getNodeValue(head, 1);
    printf("Value at position 1: %d\n", value);

    insertAtPosition(&head, 1, 15);
    printList(head);

    freeList(&head);
    printList(head);

    return 0;
}
