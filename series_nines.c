/* Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the series = 111105
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>
void main()
{
  int n,sum=0,m;

    printf("Input the number or terms : ");
  scanf("%d", &n);

  for(int i = 1; i<=n;i++){
    m=pow(10,i)-1;
     sum+=m;
     printf("%d ",m);
  }
  printf("\n The sum of the series is %d",sum);
}