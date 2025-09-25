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
    //note:-yala bubble sort mhantat
    for(int i=0 ; i<n ; i++){
        for(int j=0 ;j<n-1 ;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
    }

    for(int t=0 ; t<n ;t++){
        printf("%d \t",arr[t]);
    }
    return 0;
}