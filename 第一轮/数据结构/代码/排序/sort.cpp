#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 1e6 + 10;

void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main()
{
    int n;
    int q[N];
    printf("please input the length of arr:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }
    //双指针
    int left = 0, right = n - 1;
    quick_sort(q, left, right);

    for (int i = 0; i < n; i++)
        printf("%d\t", q[i]);
}
