#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    int ans = 1;
    int count;

    unordered_set<int> hash;
    for (auto x : arr)
    {
        hash.insert(x);
    }

    for (auto x : arr)
    {
        count = 0;
        if (hash.find(x - 1) != hash.end())
            continue;
        count++;
        while (hash.find(x + count) != hash.end())
        {
            count++;
        }
        ans = max(count, ans);
    }
    return ans;
}