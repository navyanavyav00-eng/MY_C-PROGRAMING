#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();  // To clear newline after scanf

    struct Book b[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Title: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);

        printf("Enter Author: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);

        printf("Enter Year of Publication: ");
        scanf("%d", &b[i].year);
        getchar();  // clear newline
    }

    printf("\n====Library Book List ==\n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d Details:\n", i + 1);
        printf("Title : %s", b[i].title);
        printf("Author: %s", b[i].author);
        printf("Year  : %d\n", b[i].year);
    }

    return 0;
}
