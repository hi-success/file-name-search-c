
#include <stdio.h>
#include <string.h>

int main() {
    char file1[100], file2[100], file3[100];
    char searchTerm[50];

    // Ask the user to enter three file names
    printf("Enter first file name: ");
    scanf("%99s", file1);

    printf("Enter second file name: ");
    scanf("%99s", file2);

    printf("Enter third file name: ");
    scanf("%99s", file3);

    // Ask the user to enter the search word
    printf("Enter search word: ");
    scanf("%49s", searchTerm);

    printf("\nSearch Results:\n");

    // Check first file name
    if (strstr(file1, searchTerm)) {
        printf("%s -> Match found!\n", file1);
    } else {
        printf("%s -> No match found.\n", file1);
    }

    // Check second file name
    if (strstr(file2, searchTerm)) {
        printf("%s -> Match found!\n", file2);
    } else {
        printf("%s -> No match found.\n", file2);
    }

    // Check third file name
    if (strstr(file3, searchTerm)) {
        printf("%s -> Match found!\n", file3);
    } else {
        printf("%s -> No match found.\n", file3);
    }

    return 0;
}
