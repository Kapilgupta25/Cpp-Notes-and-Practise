#include<stdio.h>
#include<math.h>
int main()
{
   
    int x;
    //ask user to enter no
    printf("enter no");
   //storing no to a variable 
    scanf("%d",&x);
   long int a=0;
   //loop to convert decimal to binary
    for(int i=1;x>0;i++) {
    a=(x%2)*pow(10,i-1) +a;
    x=x/2;
    }
   //condition if no is less than 0
    if(x<0) {
    printf("invalid");
    return 0;
    }

   // print binary no of entered no
    printf("\nbinary form of entered no is %ld",a);
    return 0;
}