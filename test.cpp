#include <stdio.h>

int isPrime(int n) {
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return n > 1;
}

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        int check = 1;
        int n;
        scanf("%d ", &n);
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d ", &a[i]);
            if (!isPrime(a[i]))
            {
                printf("no\n");
                check = 0;
                break;
            }
        }
        if (check == 1)
            printf("yes\n");
    }
    return 0;
}