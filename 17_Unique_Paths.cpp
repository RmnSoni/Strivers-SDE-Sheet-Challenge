#include <bits/stdc++.h>
int uniquePaths(int m, int n)
{

    long long ans = 1;

    int sm = min(m, n);
    int lg = max(m, n);

    for (int i = m + n - 2; i >= lg; i--)
    {
        ans *= i;
    }
    for (int i = 2; i < sm; i++)
    {
        ans /= i;
    }
    return ans;
}