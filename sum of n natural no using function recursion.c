#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("enter the limit n : ");
    scanf("%d",&n);
    printf("the sum of natural number till n is : %d",sum(n));
    return 0;
}

int sum(int n){
    if(n==1){
        return n;
    }
    int sumMN1=sum(n-1);
    int sumN=sumMN1+n;
    return sumN;
}