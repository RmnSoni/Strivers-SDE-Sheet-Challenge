#include <bits/stdc++.h>

int merge(vector<int> &arr, int low, int high, int mid)
{
    int count = 0;
    int right = mid + 1;
    int left = low;
    vector<int> temp;

    while (right <= high && left <= mid)
    {
        if (arr[left] > 2 * arr[right])
        {
            count += 1 + mid - left;
            right++;
        }
        else
            left++;
    }

    right = mid + 1;
    left = low;
    while (right <= high && left <= mid)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }

    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int> &arr, int low, int high)
{

    if (high <= low)
        return 0;

    int count = 0;

    int mid = (low + high) / 2;

    count += mergeSort(arr, low, mid);
    count += mergeSort(arr, mid + 1, high);

    count += merge(arr, low, high, mid);

    return count;
}

int reversePairs(vector<int> &arr, int n)
{
    // Write your code here.
    return mergeSort(arr, 0, n - 1);
}