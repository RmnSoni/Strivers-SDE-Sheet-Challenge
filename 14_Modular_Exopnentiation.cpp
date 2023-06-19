#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    long long ans = 1;
    long long x1 = x % m;

    while (n)
    {
        if (n % 2)
        {
            n--;
            ans *= x1;
            ans %= m;
        }
        else
        {
            x1 *= x1;
            x1 %= m;
            n /= 2;
        }
    }

    return ans;
}