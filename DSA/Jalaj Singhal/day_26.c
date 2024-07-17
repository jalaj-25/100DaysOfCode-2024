#include <stdio.h>
#include <string.h>
int isPalindrome(int n) {
    char str[20]; 
    sprintf(str, "%d", n);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int n;
    printf("Enter a nber: ");
    scanf("%d", &n);
    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
