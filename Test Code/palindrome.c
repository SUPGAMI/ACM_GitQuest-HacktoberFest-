// check for palindrome

#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    while (str[start] != '\0') {
        start++;
    }
    end = start - 2;  // Adjusting for the newline character

    // Check for palindrome using a for loop
    for (int i = 0; i <= end / 2; i++) {
        if (str[i] != str[end - i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}