#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numTestCases, i, a, b, c, d, K, result;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &K);
        result = abs(a - c) + abs(b - d);
        if ((K % 2 != 0) && result <= K && (result % 2 != 0))
            printf("YES\n");
        else if ((K % 2 == 0) && result <= K && (result % 2 == 0))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return(0);
}
