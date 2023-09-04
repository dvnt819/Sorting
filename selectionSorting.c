#include<stdio.h>
void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
void selectionSort(int* A,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                A[i]=(A[j]+A[i])-(A[j]=A[i]);
            }
        }
    }
}
int main()
{
    int arr[]={12,44,6,23,676,99};
    int n=6;
    printf("Before sorting : ");
    printArr(arr,n);
    selectionSort(arr,n);
    printf("After sorting : ");
    printArr(arr,n);
    return 0;
}