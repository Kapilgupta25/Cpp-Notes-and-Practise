#include<stdio.h>

int main(){ 
    int x;
    printf("enter no. ");
    scanf("%d",&x);
    int a=0;

    if(x<0) {
        x=-x;   
        while(x>0){
            a= a*10+x%10;
            x=x/10;
        }
        printf("%d",-a) ;
    }

    else{
        while(x>0){
            a= a*10+x%10;
            x=x/10;
        }
        printf("%d",a) ;

        while(x=0){
            printf("%d",x);
        }
    }
    return 0;
}
