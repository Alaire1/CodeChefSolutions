#include <stdio.h>

int checkContrains(int F1, int F2, int A1, int A2, int B1, int B2)
{
    if ((F1 < 1 || F1 >4) || (F2 < 1 || F2 >4) || F1 == F2)
        return (1);
    else if ((A1 < 1 || A1 >4) || (A2 < 1 || A2 >4) || A1 == A2)
        return (1);
    else if ((B1 < 1 || B1 >4) || (B2 < 1 || B2 >4) || B1 == B2)
        return (1);
    else if (A1 == B1 || A1 == B2 || A2 == B2 || A2 == B1)
        return (1);
    return (0);
}

int main(void) {
    int numTestCases;
    scanf("%d", & numTestCases);
    if (numTestCases > 288 || numTestCases < 1)
        return;
    int featureA, featureB, A1, A2, B1, B2;
    for (int i = 0; i < numTestCases; i++) {
        scanf("%d %d %d %d %d %d", &featureA, &featureB, &A1, &A2, &B1, &B2);
        if (checkContrains(featureA, featureB, A1, A2, B1, B2) == 1)
            return(1);
        if((featureA == A1 || featureA == A2) && (featureB == A1 
        || featureB == A2 ))
            printf("1\n");
        else if ((featureA == B1 || featureA == B2) && (featureB == B1 
        ||featureB == B2))
            printf("2\n");
        else
            printf("0\n");
    }
    return(0);
}
    
    