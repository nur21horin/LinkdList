#include <stdio.h>
void insertElement(int arr[], int *size, int pos, int value) {
    if (pos < 0 || pos > *size) {
        printf("Invalid position\n");
        return;
    }
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*size)++;
}
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[100];
    int size ;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int pos, value;
    printf("Original Array: ");
    displayArray(arr, size);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    insertElement(arr, &size, pos, value);
    printf("Array after insertion: ");
    displayArray(arr, size);
    return 0;
}
