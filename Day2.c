//1
#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

//2
#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reversed Number = %d", reverse);

    return 0;
}

//3
#include <stdio.h>

int main() {
    int n, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;
        product *= digit;
        n = n / 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}

//4
#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if(original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
