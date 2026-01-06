#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 3 == 0 && num % 5 != 0)
        printf("%d is divisible by 3 but not by 5\n", num);
    else
        printf("%d does not meet the condition\n", num);

    return 0;
}
