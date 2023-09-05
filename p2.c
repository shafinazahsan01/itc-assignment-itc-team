#include <stdio.h>

void inputNumbers(int *a, int *b, int *c) {
    printf("Enter three numbers: ");
    scanf("%d %d %d", a, b, c);
}


int Largest(int a, int b, int c) {
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    return largest;
}

void Result(int largest) {
    printf("The largest number is: %d\n", largest);
}

int main() {
    int num1, num2, num3;

    inputNumbers(&num1, &num2, &num3);
    int largest = Largest(num1, num2, num3);
    Result(largest);

    return 0;
}
