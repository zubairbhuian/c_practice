#include<stdio.h>


int main()
{
    int result;
    
    printf("Enter Your  Result: ");
    scanf("%d",&result);
    printf("Enter Your Result: ");
    if(result>=0 && result<=100)
    if(result >=80)
    printf("A+");
    else if(result>=70)
    printf("A");
    else if(result>=60)
    printf("A-");
    else if(result>=40)
    printf("B");
    else printf("Faild");
    else printf("Unvalide");

    return 0;
}