#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

void merge(vector<int> &num, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    for(int i = 0; i < n1; ++i) L[i] = num[left + i];
    for(int j = 0; j < n2; ++j) R[j] = num[mid + 1 + j];
    
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) num[k++] = L[i++];
        else              num[k++] = R[j++];
    }
    while (i < n1) num[k++] = L[i++];
    while (j < n2) num[k++] = R[j++];
}

void mergesort(vector<int> &num, int left, int right)
{
    if (left < right)
    {
        int mid  = (left + right) / 2;
        mergesort(num, left, mid);
        mergesort(num, mid + 1, right);
        merge(num, left, mid, right);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &num[i]);
    mergesort(num,0, n - 1);
    for(int i = 0; i < n; i++)
        printf("%d\n", num[i]);
    return 0;
}