#include<stdio.h>

int factorial(int n) {
    if(n == 1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);

    printf("Factorial of num %d is : %d",num,factorial(num));
}