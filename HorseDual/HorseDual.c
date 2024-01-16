int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);
    int minDifference;
    int strengths[N];
    int pi;
    int difference;

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &pi);
        strengths[i] = pi;
    }
    qsort(strengths, N, sizeof(int), compare);
    minDifference = strengths[1] - strengths[0];
    for (int i = 2; i < N; i++) 
    {
        difference = strengths[i] - strengths[i-1];
        if (difference < minDifference) 
            minDifference = difference;
    }
    printf("%d\n", minDifference);
    return 0;
}
