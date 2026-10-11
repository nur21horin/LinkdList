#include <stdio.h>
int main() {
int arr[100];
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);
printf("Enter %d elements in the array: ", n);
for (int i = 0; i < n; ++i) {
scanf("%d", &arr[i]);
}
int t;
printf("Enter the element to find: ");
scanf("%d", &t);
int found = 0;
for (int i = 0; i < n; ++i) {if (arr[i] == t) {
found = 1;
break;
}
}
if (found) {
printf("Element found in the array.\n");
} else {
printf("Element not found in the array.\n");
}
return 0;
}