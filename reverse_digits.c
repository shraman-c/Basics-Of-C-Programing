//Reverse of digit using while
#include <stdio.h>
void main(){
  printf("Enter a number:");
  int n,rev;
  scanf("%d",&n);
  while(n>0)
    {
    rev=rev*10+(n%10);
    n=n/10;
    }
  printf("%d",rev);
 }