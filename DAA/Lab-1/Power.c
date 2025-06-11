#include<stdio.h>

int main() {
    int a,b,ans=1;
    printf("Enter a number a as base:");
    scanf("%d",&a);
    printf("Enter a number b as power :");
    scanf("%d",&b);

    for(int i=1; i<=b; i++){
        ans *= a;
    }

    printf("Power of Given number %d is : %d",a,ans);
    return 0;
}