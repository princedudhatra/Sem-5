#include<stdio.h>

int main() {
    int n,sum = 0;
    printf("Enter a Number :");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    printf("Sum of 1 to number %d is : %d",n,sum);
    return 0;
}