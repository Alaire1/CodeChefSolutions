#include <stdio.h>

int main(void) {
int numTestCases, i,L, R, result;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d", &L, &R);
        printf("%i\n", (2 * (R-L) +  1));
    }
    return (0);
}