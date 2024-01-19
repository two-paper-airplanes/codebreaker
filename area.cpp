#include <cstdio>
using namespace std;

int main() {
    long long n, sum = 0;
    scanf("%lld", &n);

    for (long long i = 0; i < n; i++) {
        long long a, b;

        scanf("%lld %lld", &a, &b);

        sum += a * b;
    }
    
    printf("%lld", sum);
}
