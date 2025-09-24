#include<stdio.h>

int fib(int n);

int main(){
    int n;
    printf("enter the number n : ");
    scanf("%d",&n);
    printf("the fibonacci series till index %d is : ",n);
    for(int i=0 ; i<n ; i++){
        printf("%d \t",fib(i));
    }
    return 0;
}

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibN=fibNM1+fibNM2;
    return fibN; 
}