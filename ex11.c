#include <stdio.h>

int main(void) {
	 int numTestCases, i, U, V, A, S, result, a;
    scanf("%d", & numTestCases);
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d %d %d", &U, &V, &A, &S);
        a = (V * V - U * U) / ((2 * S));
        if (-a <= A)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return (0);

}
