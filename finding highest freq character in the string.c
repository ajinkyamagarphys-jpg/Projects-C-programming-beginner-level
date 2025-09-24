#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int count;
    int max=0;
    char maxch;
    fgets(str,100,stdin);

    for(char c='a' ; c<='z'; c++){
        count=0;
        for(int i=0 ; str[i]!='\0' ;i++){
            if(str[i]==c){
                count++;
            }
        }
        if(count>max){
            max=count;
            maxch=c;
        }
    }
    printf("the character %c has been repeated %d times in the string ",maxch,max);
    return 0;
}