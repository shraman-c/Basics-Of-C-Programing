//factorial

#include <stdio.h>
void fact();
void odd_even();
void avg();
void avg() {
    int avg = (100+250+10)/3;
    printf("%d\n", avg);
}
void fact() {
    int n1,sum=1,i=1;
    printf("Enter value of n1: ");
    scanf("%d", &n1);
    while(n1>=i) {
        sum=sum*i;
        i++;
    }
    printf("%d\n",sum);
}
void odd_even() {
    int n,sum1=0,sum2=0,i=1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while(i<=n) {
        if (i%2==0) {
            sum1+=i;
        }
        else {
            sum2+=i;
        }
        i++;
    }
    printf("Even sum upto %d is %d \n",n,sum1);
    printf("odd sum upto %d is %d \n",n,sum2);
}

void table();
void table() {
    int i=1,n=10,mul=1;
    while (i<=n) {
        mul=14*i;

        printf("14 x %d = %d \n",i,mul);
        i+=1;
    }

}
void temperature();
void temperature() {
        float temp,c,f;
        printf("Enter a Temperature");
        scanf("%d \n", &temp);
        c=(temp-32)*5/9;
        f=(temp*9/5)+32;
        printf("Farenheit to celcius is:%f",c);
        printf("celcius to farenheit is:%f",f);
    }
void main() {
    int ch,count=0;
    while(count<5) {
        printf("Enter \n 1 for temp conversion \n 2 for table of 14 \n 3 for odd even sum upto n \n 4 average of 100,250,10 \n 5 for factorial upto n\n");
        printf("Enter Choice");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                temperature();
            break;
            case 2:
                table();
            break;
            case 3:
                odd_even();
            break;
            case 4:
                avg();
            break;
            case 5:
                fact();
            break;
        }
        count++;
    }
}