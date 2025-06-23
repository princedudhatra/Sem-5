#include<stdio.h>

int bubbleSort(int a[],int n){
    int swapped = 0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapped++;
            }
        }
        if (swapped == 0){
            printf("Array is already sorted.");
        }
    }

}

int main() {
    int n;
    printf("Enter size of an array :\n");
    scanf("%d",&n);
    int a[50];

    for(int i=0 ; i<n ; i++){
        printf("Enter value at index (%d) :",i);
        scanf("%d",&a[i]);
    }

    printf("Array is :");
    for(int i =0 ; i<n ; i++){
        printf("%d",a[i]);
        if(i == n-1){
            break;
        }
        else{
            printf(",");
        }
    }
    printf("\n");
    bubbleSort(a,n);
    printf("Sorted Array is :");
    for(int i =0 ; i<n ; i++){
        printf("%d",a[i]);
        if(i == n-1){
            break;
        }
        else{
            printf(",");
        }
    }
}