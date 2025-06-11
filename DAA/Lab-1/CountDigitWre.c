#include<stdio.h>

int countDigit(int n){
    if (n == 0){
        return 0;
    }
    return 1 + countDigit(n/10);
}

int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    printf("Total digits in Number %d is :%d",num,countDigit(num));
    return 0;
}