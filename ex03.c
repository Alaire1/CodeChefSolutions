#include <stdio.h>

int main(void) {
int numTestCases, i,N,S, max, result, min;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d", &N, &S);
        max = N;
        min = 0;
        if (S < N)
            max = S;
       while ((min + max) != S)
            min++;
        printf("%i\n", (max - min));
    }
    return (0);
}
