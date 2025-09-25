#include<stdio.h>

int main(){
    int n;
    float g;
    int m;
    printf("select the conversion from the following list \n");
    printf("press_1 : cm<>m<>km \n");
    printf("press_2 : g<>kg \n");
    printf("press_3 : cel.<>Fahr. \n");
    
    printf("please any number to begin with the operations : ");
    scanf("%d",&n);

    switch(n){
        case 1 :
        printf("again press_1 for cm<>m and press_2 for m<>km :");
        scanf("%d",&m);
        switch(m){
            case 1 :
            printf("enter length in cm : ");
            scanf("%f",&g);
            printf(" %f cm = %f m",g,g/100);
            break;

            case 2 :
            printf("enter length in m : ");
            scanf("%f",&g);
            printf(" %f m = %f km",g,g/1000);
            break;
        }
        break;

        case 2 :
        printf("again press_1 for kg->g and press_2 for g->kg : ");
        scanf("%d",&m);
        switch(m){
            case 1 :
            printf("enter weight in kg : ");
            scanf("%f",&g);
            printf(" %f kg = %f g",g,g*1000);
            break;

            case 2 :
            printf("enter weight in g : ");
            scanf("%f",&g);
            printf(" %f g = %f kg",g,g/1000);
            break;
        }
        break;

        case 3 :
        printf("again press_1 for c->f and press_2 for f->c : ");
        scanf("%d",&m);
        switch(m){
            case 1 :
            printf("enter temperature in celsius : ");
            scanf("%f",&g);
            printf(" %f C = %f F",g,(g-31)*5/9);
            break;

            case 2 :
            printf("enter temperature in fahrnheint : ");
            scanf("%f",&g);
            printf(" %f F = %f C",g,g*(9/5)+32);
            break;
        }
        break;
        
    }
    // tumhi kontapn formula yamdhe takun fully functional converter interface banvu shakta 
    return 0;
}