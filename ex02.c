int main(void) {
    int numTestCases, i, num;

    scanf("%d", &numTestCases);

    for (i = 0; i < numTestCases; i++) {
        scanf("%d", &num);
        printf("%d\n", (num /2) + 1);
    }
    return 0;
}