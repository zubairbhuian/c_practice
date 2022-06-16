#include<stdio.h>

int main (){
    int a,b,c;
    printf("Enter Three numbers:");
    scanf("%d%d%d",&a,&b,&c);
   if(a>=b)
   {
    if(a>=c)
    {
        printf("%d is the biggest number",a);
    }else{
        printf("%d is the biggest number",c);
    }
   }else if (b>=c)
   {
    printf("%d is the biggest number",b);
   }else{
    printf("%d is the biggest number",c);
   }
   
    


    return 0;
}

