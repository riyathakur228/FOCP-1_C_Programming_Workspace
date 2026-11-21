#include <stdio.h>

int main() {
    int n, i, j;
    long long a[1000], diff, best;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%lld", &a[i]);
    best = -1;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            diff = a[i] - a[j];
            if (diff < 0) diff = -diff;
            if (best == -1 || diff < best) best = diff;
        }
    }
    printf("%lld\n", best);
    return 0;
}