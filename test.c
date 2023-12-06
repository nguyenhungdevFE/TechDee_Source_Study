#include<stdio.h>
#include<math.h>
int main(){
    long long x, t, n;
    scanf("%lld %lld %lld", &x, &t, &n);
    long long res = ceil(pow(n, 1.0 / x));
    printf("%lld", (long long) res * t);
    return 0;
}
