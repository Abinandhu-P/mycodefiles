#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *str = (char *) malloc(sizeof(char) * 100);
    scanf("%[^\n]s", str);

    int len = strlen(str);
    int found = 0;

    // Outer loop: iterate through each character in the string
    for (int j = 0; j < len; j++) {
        int cnt = 0;

        // Inner loop: count occurrences of str[j] in the string
        for (int i = 0; i < len; i++) {
            if (str[j] == str[i]) {
                cnt++;
            }
        }

        // If this character is non-repeating (appears once), print it
        if (cnt == 1) {
            printf("The first non-repeating character is: %c\n", str[j]);
            found = 1;
            break;  // We found the first non-repeating character, so break the loop
        }
    }

    // If no non-repeating character was found
    if (!found) {
        printf("No non-repeating characters found.\n");
    }

    free(str);  // Don't forget to free the allocated memory
    return 0;
}

