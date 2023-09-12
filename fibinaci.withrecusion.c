#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

in	t main() {
    int numTerms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms); 

    printf("Fibonacci Series: ");
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}