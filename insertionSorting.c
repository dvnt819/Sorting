#include<stdio.h>
void printArr(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}
void insertionSort(int* A,int n)
{
    int temp,j;
    for(int i=1;i<n;i++)
    {   
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
}
int main()
{
    int arr[]={12,44,6,23,676,99};
    int n=6;
    printf("Before sorting : ");
    printArr(arr,n);
    insertionSort(arr,n);
    printf("After sorting : ");
    printArr(arr,n);
    return 0;
}