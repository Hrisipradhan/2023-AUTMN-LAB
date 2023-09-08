#include <stdio.h>


void createArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }
}


void displayArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void insertElement(int arr[], int n, int element, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position\n");
        return;
    }
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
    printf("Inserted %d at position %d\n", element, position);
}


void deleteElement(int arr[], int n, int position) {
    if (position < 0 || position >= n) {
        printf("Invalid position\n");
        return;
    }
    int deletedElement = arr[position];
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Deleted %d from position %d\n", deletedElement, position);
}


int linearSearch(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    createArray(arr, n);

    // int element;
    // int position;

    while (1) {
        printf("\nMenu:\n");
        printf("a. Insert an element\n");
        printf("b. Delete an element\n");
        printf("c. Linear search\n");
        printf("d. Display array\n");
        printf("e. Exit\n");

        char choice;
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':;
                int position;
                int element;
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert at: ");
                scanf("%d", &position);
                insertElement(arr, n, element, position);
                break;
            case 'b':
                printf("Enter the position to delete from: ");
                scanf("%d", &position);
                deleteElement(arr, n, position);
                break;
            case 'c':
                printf("Enter the element to search: ");
                scanf("%d", &element);
                int index = linearSearch(arr, n, element);
                if (index != -1) {
                    printf("Element %d found at position %d\n", element, index);
                } else {
                    printf("Element %d not found in the array\n", element);
                }
                break;
            case 'd':
                displayArray(arr, n);
                break;
            case 'e':
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
