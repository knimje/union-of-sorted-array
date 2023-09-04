//NAME:KRITIKA NIMJE
//PRN :22070521193

//sorted arrays a and b
//union according to sorted array
// print the third array

// the same elements are repeated
#include<stdio.h>

int main()
{
    int n,m;
    printf("enter the number of elements in both the array");
    scanf("%d%d",&n,&m);
    int A[n],B[m];

    //taking input of array
    printf("FIRST SORTED ARRAY: \n");
    for(int i=0;i<n;i++)
    {
        printf("ENTER ELEMENT: \n");
        scanf("%d",&A[i]);
    }
    printf("SECOND SORTED ARRAY: \n");
    for(int i=0;i<m;i++)
    {
        printf("ENTER ELEMENT: \n");
        scanf("%d",&B[i]);
    }

    //compare and copy
    int C[n+m];
    int i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(A[i]==B[j])
        {
            C[k++]=A[i++];
            j++;
        }
        else if(A[i]<B[j])   C[k++]=A[i++];
        else C[k++]=B[j++];
    }

    // only copying
    while(i<n)    C[k++]=A[i++];
    while(j<m)    C[k++]=B[j++];

    //print the sorted array
    for(int i=0;i<k;i++)  printf("%d ",C[i]);
    return 0;
}
