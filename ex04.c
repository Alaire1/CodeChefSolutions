#include <stdio.h>

int main(void) {
int numTestCases, i, X, N, S, R, hRating;
    scanf("%d", & numTestCases);
    
    for (i = 0; i < numTestCases; i++) {
        scanf("%d %d", &N, &X);
        hRating = 0;
        for (int j = 0; j < N; j++){
            scanf("%d %d", &S, &R);
            if (S <= X && R > hRating)
                hRating = R;
        }
        printf("%i\n", hRating);
    }
    return (0);
}
