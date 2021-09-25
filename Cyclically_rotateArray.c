#include<stdio.h>
#include<stdlib.h>

void rotate(int A[], int n)
{
    int x = A[n-1], i;
    for(i=n-1; i>0; i--)
    {
        A[i] = A[i-1];
    }
    A[0] = x;
}

void main()
{
    int A[] = {47, 68, 31, 2};
    int i;
    int n = sizeof(A)/sizeof(A[0]);
    printf("The original array: \n");
    for(i=0; i<n; i++)
        printf("%d \n", A[i]);
    rotate(A, n);
    printf("The array after rotating cyclically: \n");
    for(i=0; i<n;i++)
        printf("%d \n", A[i]);
}
