#include <stdio.h>

void findResult(int A, int B, int C, int min)
{
    if (A == min)
        printf("%d\n", (B + C));
    else if (B == min)
        printf("%d\n", (A + C));
    else if (C == min)
        printf("%d\n", (A + B));
}
int checkForDoubles(int A, int B, int C)
{
    if ((A == B && C < A))
        return (printf("%d\n", (A + B)), 1);
    else if ((A == C && B < A))
        return (printf("%d\n", (A + C)), 1);
    else if (A == B || A == C)
        return (printf("%d\n", (B + C)), 1);
    else if (B == C && A < C)
        return (printf("%d\n", (B + C)), 1);
    else if (B == C)
        return (printf("%d\n", (A + C)), 1);
    else if (A == B && A == C)
        return (printf("%d\n", (B + C)), 1);
    return (0);
}

int main(void) {
    int numTestCases, i, numElements;
    scanf("%d", & numTestCases);
    int spellA, spellB, spellC, min;
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d", & spellA, & spellB, & spellC);
        min = spellA;
        if (spellB < min)
            min = spellB;
        if (spellC < min)
            min = spellC;
        if (checkForDoubles(spellA, spellB, spellC) == 0)
            findResult(spellA, spellB, spellC, min);
    }
    return (0);

}