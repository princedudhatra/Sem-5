#include<stdio.h>

int main() {
    int n, ans=1;
    printf("Enter a Number :");
    scanf("%d",&n);

    for(int i=1; i<=n ; i++){
        ans = ans*i;
    }
    printf("Factorial of given number is : %d",ans);
    return 0;
}
