#include <stdio.h>

struct Book {
    int book_id;
    char title[10];
    char author[10];
    float price;
};

void printBookDetails(struct Book b) {
    printf("\nBook Details:\n");
    printf("ID     : %d\n", b.book_id);
    printf("Title  : %s\n", b.title);
    printf("Author : %s\n", b.author);
    printf("Price  : ₹%.2f\n", b.price);
}

int main() {
    struct Book myBook;

    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", myBook.title);  

    printf("Enter Author Name: ");
    scanf(" %[^\n]", myBook.author); 

    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    printBookDetails(myBook);

    return 0;
}