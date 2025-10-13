#include <stdio.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int start = 0;
    int end = 0;

    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Move to last character

    // Swap characters from both ends
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    REVERSE(str);
    printf("Reversed string: %s\n", str);

    return 0;
}