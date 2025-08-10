/*11. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
*/

#include <stdio.h>
#include <math.h>
void main()
{
    int n,sum=0,m;
    printf("Input the number or terms : ");
    scanf("%d", &n);

    for(int i = 0; i<n;i++){
        m=(m*10)+1;
        sum+=m;
        printf("%d ",m);
    }
    printf("\n The sum of the series is %d",sum);
}