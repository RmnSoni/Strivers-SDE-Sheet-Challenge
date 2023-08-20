#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    int freq = 1, ans = arr[0];\

    for (int i = 1; i < n; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
            freq++;
        }
        else if (ans == arr[i])
        {
            freq++;
        }
        else
            freq--;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans == arr[i])
            count++;
    }
    if (count > n / 2)
    {
        return ans;
    }
    return -1;
}