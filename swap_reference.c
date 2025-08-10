//Swap of two numbers using 3rd value using call by reference
#include <stdio.h>
void swap(int *a, int *b)
{
 *a=*a+*b;
 *b=*a-*b;
 *b=*a-*b;
  printf("%d\n%d",*a,*b);
}
void main(){
    int a=10,b=20;sdfjkjljsdkjfl
    swap(&a,&b);
  }