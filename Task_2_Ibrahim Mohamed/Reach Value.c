#include <stdio.h>
#include <stdbool.h>

bool canReach(long long current, long long N) {
    if (current == N) {
        return true;
    }
    if (current > N) {
        return false;
    }
    return canReach(current * 10, N) || canReach(current * 20, N);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        if (canReach(1, N)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}