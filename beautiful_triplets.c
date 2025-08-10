#include <stdio.h>
void beautifulTriplets(){
    int c=0,n,d;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the Common difference ");
    scanf("%d",&d);
    int arr[n];
    printf("Enter the sorted of array ");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Triplets are: \n");
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]-arr[i]==d)
            {
                for(int k =n-1;k>=0;k--)
                {
                    if(arr[j]-arr[i]==arr[k]-arr[j])
                    {
                        c++;
                        printf("(%d , %d , %d)", arr[i], arr[j], arr[k]);
                        printf("\n");
                    }
                }
            }
        }
    }
    printf("Count = %d ",c);
}
void main()
{
    beautifulTriplets();
}