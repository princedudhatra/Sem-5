#include<stdio.h>

int power(int n,int pow){
    if(pow == 0){
        return 1;
    }
    return n * power(n,pow-1);
}

int main() {
    int a,b,ans=1;
    printf("Enter a number a as base:");
    scanf("%d",&a);
    printf("Enter a number b as power :");
    scanf("%d",&b);
    printf("Power of Given number %d is : %d",a,power(a,b));
    return 0;
}