// A number is valid if it is positive or even. Take input from user and check its validity
#include<stdio.h>


int main (){
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);

    if(a>=0 && a%2==0)
        printf("%d valid",a);
    else
        printf("%d Not valid",a);
    

    return 0;
}

