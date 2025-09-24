#include<stdio.h>

int main(){
    int a,b;
    char ch;
    printf("please enter the operation(add-'+',substract-'-',multiply-'*',divide-'/',modulo-'%') : ");
    scanf("%c",&ch);
    switch(ch){
        case '+':
        printf("enter the first number : ");
        scanf("%d",&a);
        printf("enter the second number : ");
        scanf("%d",&b);
        printf("the addition is : %d ",a+b);
        break;
        case '-':
        printf("enter the bigger number : ");
        scanf("%d",&a);
        printf("enter the smaller number : ");
        scanf("%d",&b);
        printf("the addition is : %d ",a-b);
        break;
        case '*':
        printf("enter the first number : ");
        scanf("%d",&a);
        printf("enter the second number : ");
        scanf("%d",&b);
        printf("the multiplication is : %d ",a*b);
        break;
        case '/':
        printf("enter the divident : ");
        scanf("%d",&a);
        printf("enter the divisor : ");
        scanf("%d",&b);
        printf("the division is : %d ",a/b);
        break;
        case '%':
        printf("enter the divident  : ");
        scanf("%d",&a);
        printf("enter the divisor  : ");
        scanf("%d",&b);
        printf("the remainder is : %d ",a%b);
        break;
    }
    return 0;
}