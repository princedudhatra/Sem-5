#include<stdio.h>

int main() {
    int n,count = 0;
    printf("Enter a Number :");
    scanf("%d",&n);
    int a = n;
    while(n != 0){
        n % 10;
        count++;
        n /= 10;
    }
    printf("Total digits in Number %d is :%d",a,count);
    return 0;
}