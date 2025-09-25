#include<stdio.h>

int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];

    for(int m=0 ; m<n ; m++){
        printf("enter the value at arr index %d :",m);
        scanf("%d",&arr[m]);
    }

    for(int i=0; i<n/2 ; i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-1-i];
        arr[i]=secondvalue;
        arr[n-1-i]=firstvalue;
    }

    for(int j=0 ; j<n ;j++){
        printf("%d \t",arr[j]);
    }
    return 0;
}