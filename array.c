#include <stdio.h>

int main() {
    int arr[20], i, search, found = 0;

    printf("Enter 20 elements:\n");

    for(i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search:\n ");
    scanf("%d", &search);

    for(i = 0; i < 20; i++) {
        if(arr[i] == search) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}