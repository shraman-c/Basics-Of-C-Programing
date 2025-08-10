#include <stdio.h>
void main()
{
    int n=5;
    int a[n];

    //Insert 5 elements into an array and print it
    printf("Enter 5 elements into an array");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the 5 elements for an array ");
    for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    //find only even and only odd elements
    for(int i =0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("Even number at %d is %d \n",i,a[i]);
        else
            printf("Odd number at %d is %d \n",i,a[i]);
    }
    printf("\n");
    
    // Find largest and smallest element of the array
    int max=a[0],min=a[0];
    for(int i =0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];
    }
    printf("The maximum value is %d \n",max);
    printf("The minimum value is %d\n",min);

    //Copy one array to another
    int b[n];

    for(int i =0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The copied array is \n");
    for(int i =0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    //sum 2 arrays and store it in another array
    int c[n];
    for(int i =0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("The sum of 2 arrays is \n");
    for(int i =0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n");

    //Sum and average of all elements in an array
    int sum=0;
    float avg;

    for(int i =0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    printf("The sum of all elements is %d \n",sum);
    printf("The average of all elements is %f \n",avg);

    //find negative number from an array
    for(int i =0;i<n;i++)
    {
        if(a[i]<0)
            printf("Negative number at %d is %d \n",i,a[i]);
    }
    printf("\n");

}