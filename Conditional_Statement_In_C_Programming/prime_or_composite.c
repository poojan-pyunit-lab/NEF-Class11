#include <stdio.h>

int main() {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        flag = 1; // Not prime

    for(i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("%d is a prime number\n", num);
    else
        printf("%d is a composite number\n", num);

    return 0;
}
