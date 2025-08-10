#include <stdio.h>
int main(void){
  int l,n,asa=0;
  scanf("%d",&l);
  for(int i=0;i<l;i++){
    printf("Enter a no");
    scanf("%d",&n);
    asa=asa*100+n;
  }
  int rev_num = 0;
  while (asa > 0) {
    rev_num = rev_num * 10 + asa % 10;
    asa = asa / 10;
  }
  asa = rev_num;
  printf("%d",asa);
  /*printf("Even Values are : \n");
  for(int i=0;i<l;i++) {
    if ((asa%100)%2==0) {
      printf("%d ",asa%100);
    }
    asa=asa/100;
  }*/
}