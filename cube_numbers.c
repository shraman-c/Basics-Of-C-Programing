#include <stdio.h>
#include <math.h>
void main()
{
  int n,d;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
      d=pow(i,3);
      printf("%d 's cube is %d \n",i, d);
  }
}
