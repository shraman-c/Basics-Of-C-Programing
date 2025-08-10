#include <stdio.h>
void main()
{
  int e;
  printf("ENTER NUMBER OF ELEMENTS FOR THE ARRAY");
  scanf("%d", &e);
  int a[e];
  printf("Enter elements of array\n");
  //user input
  for (int i = 0; i <e; i++) {
    scanf("%d", &a[i]);
  }
  //Sum
  int sum=0;
  for(int i=0;i<e;i++){
    sum+=a[i];
  }
  int avg=sum/e;
  printf("the sum is %d\n",sum);
  printf("the avg is %d\n",avg);
printf("\n");
  //printing only even number and odd
  for (int i=0;i<e;i++){
    if (a[i]%2==0){
      printf("The even numbers are at %d position is: %d \n \n",i,a[i]);
    }
    else{
      printf("The odd numbers are at %d position is: %d\n\n",i,a[i]);
    }
  }
  printf("\n");
  //Divisible by 3
  for (int i=0;i<e;i++){
    if (a[i]%3==0){
      printf("The numbers are at %d position are divisible by 3 is: %d \n",i,a[i]);
    }
 }
  printf("\n");
 //smallest element in the array
  int min =a[0];
 for (int i=0;i<e;i++){
   if(a[i]<min) {
     min=a[i];
   }
 }
  printf("\n");
printf("\n the smallest element in the array is %d",min);
  //largest element in the array
  int max = a[0];
  for (int i = 0; i <e; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  printf("\n the largest  element in the array is %d",max);
  printf("\n");
  //reverse of array
  printf("the reversed array is : ",max);
  for (int i=e-1;i>=0;i--) {
    printf("%d\t" , a[i]);
  }
  printf("\n");
}
