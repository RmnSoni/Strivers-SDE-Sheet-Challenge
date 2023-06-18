#include <bits/stdc++.h>
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{

    int fr = 0, lr = n - 1, fc = 0, lc = m - 1;
    int tr, tl, br, bl;

    while (fr < lr && fc < lc)
    {
        tr = mat[fr][fc];
        tl = mat[fr][lc];
        br = mat[lr][fc];
        bl = mat[lr][lc];
        for (int i = fc + 1; i < lc; i++)
            mat[lr][i - 1] = mat[lr][i];
        for (int i = fr + 1; i < lr; i++)
            mat[i - 1][fc] = mat[i][fc];
        for (int i = lc - 1; i > fc; i--)
            mat[fr][i + 1] = mat[fr][i];
        for (int i = lr - 1; i > fr; i--)
            mat[i + 1][lc] = mat[i][lc];
        mat[fr][fc + 1] = tr;
        mat[fr + 1][lc] = tl;
        mat[lr - 1][fc] = br;
        mat[lr][lc - 1] = bl;
        fr++;
        fc++;
        lc--;
        lr--;
    }
}