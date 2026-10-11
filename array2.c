#include <stdio.h>
int main() {
int arr[1000];
int n, pos;
// Input size and elements in the array
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("Enter %d elements in the array: ", n);
for (int i = 0; i < n; ++i) {
scanf("%d", &arr[i]);
}
printf("Enter the position to delete (1 to %d): ", n);
scanf("%d", &pos);
// Invalid delete position
if (pos < 1 || pos > n) {
printf("Invalid position! Please enter a valid position.\n");
} else {
// Copy
for (int i = pos - 1; i < n - 1; ++i) {
arr[i] = arr[i + 1];
}
--n;
printf("Elements of the array : ");
for (int i = 0; i < n; ++i) {
printf("%d ", arr[i]);
}
printf("\n");
}
return 0;
}