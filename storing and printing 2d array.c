#include<stdio.h>

void printarr(int arr[][10],int m,int n);

int main(){
    int arr[2][10];
    int m,n;
    for(int i=0 ; i<10 ; i++){
        arr[0][i]=3*(i+1);
    }

    for(int j=0 ; j<10 ; j++){
        arr[1][j]=4*(j+1);
    }

    printarr(arr,0,10);
    
    printarr(arr,1,10);
}

void printarr(int arr[][10],int m,int n){
    for(int i=0 ; i<n ; i++){
        printf("%d \n",arr[m][i]);
    }
}