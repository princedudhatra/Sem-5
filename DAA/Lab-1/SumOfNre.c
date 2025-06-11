#include<stdio.h>

int sumOfN(int n){
    if(n == 0){
        return 0;
    }
    return n + sumOfN(n-1);
}

int main() {
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);

    printf("Sum of 1 to number %d is : %d",num,sumOfN(num));
    return 0;
}