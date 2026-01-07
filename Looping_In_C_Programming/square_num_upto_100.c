#include <stdio.h>

int main() {
    int i = 1;

    while(i * i <= 100) {
        printf("%d ", i * i);
        i++;
    }

    return 0;
}
