#include <stdio.h>

int main() {
    int n, key, low, high, mid;

    printf("Enter number of books: ");
    scanf("%d", &n);

    int books[n];
    printf("Enter Book IDs in ascending order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    printf("Enter the Book ID to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(books[mid] == key) {
            found = 1;
            break;
        }
        else if(books[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found)
        printf("Book ID %d is available on the shelf.\n", key);
    else
        printf("Book ID %d is NOT available.\n", key);

    return 0;
}
