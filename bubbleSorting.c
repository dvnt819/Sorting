#include<stdio.h>
void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                A[j]=(A[j]+A[j+1])-(A[j+1]=A[j]);
            }
        }
    }
}
int main()
{
    int arr[]={12,44,6,23,676,22};
    int n=6;
    printf("Before sorting : ");
    printArr(arr,n);
    bubbleSort(arr,n);
    printf("After sorting : ");
    printArr(arr,n);
    return 0;
}