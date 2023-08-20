#include <bits/stdc++.h>

int merge(vector<int> &arr, int h, int l, int mid)
{

    vector<int> temp;

    int left = l;
    int right = mid + 1;
    int count = 0;
    while (left <= mid && right <= h)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            count += 1 + mid - left;
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= h)
    {
        temp.push_back(arr[right++]);
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
    return count;
}

int mergeSort(vector<int> &arr, int h, int l)
{

    if (h == l)
        return 0;

    int count = 0;
    int mid = (h + l) / 2;

    count += mergeSort(arr, mid, l);
    count += mergeSort(arr, h, mid + 1);

    count += merge(arr, h, l, mid);

    return count;
}

long long getInversions(long long *arr, int n)
{
    // Write your code here.
    vector<int> lit;
    for (int i = 0; i < n; i++)
    {
        lit.push_back(arr[i]);
    }

    return mergeSort(lit, n - 1, 0);
}