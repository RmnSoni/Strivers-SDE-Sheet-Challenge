#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int req = arr.size() / 3;
    int ele1 = 0, ele2 = 0, cnt2 = 0, cnt1 = 0;

    for (auto num : arr)
    {
        if ((cnt1 == 0) && (ele2 != num))
        {
            ele1 = num;
            cnt1 = 1;
        }
        else if ((cnt2 == 0) && (ele1 != num))
        {
            ele2 = num;
            cnt2 = 1;
        }
        else if (ele1 == num)
        {
            cnt1++;
        }
        else if (ele2 == num)
            cnt2++;
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 = 0;
    
    for (auto x : arr)
    {
        if (x == ele1)
        {
            cnt1++;
        }
        if (x == ele2)
        {
            cnt2++;
        }
    }
    vector<int> ans;

    if (cnt1 > req)
        ans.push_back(ele1);
    if (cnt2 > req)
        ans.push_back(ele2);

    return ans;
}