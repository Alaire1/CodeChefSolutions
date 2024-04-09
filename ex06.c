#include <stdio.h>

int main(void) {
int numTestCases, i, num;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d",  &num);
        if (num >= 1 && num < 100)
            printf("Easy\n");
          else if (num >= 100 && num < 200)
            printf("Medium\n");
        else if (num >= 200 && num <= 300)
            printf("Hard\n");
    }
    return (0);
}
