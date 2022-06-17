#include<stdio.h>

int main (){
    int a,b,c,d;
    printf("Enter Four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
if(a>=b)
{
    if(a>=c)
    {
        if(a>=d)
        {
            printf("%d is the biggest number",a);
        }else{
            printf("%d is the biggest number",d);
        }
    }else if (c>=d)
    {
        printf("%d is the biggest number",c);
    }else{
        printf("%d is the biggest number",d);
    }
    
}else if (b>=c)
{
    if(b>=d){
        printf("%d is the biggest number",b);
    }else{
        printf("%d is the biggest number",d);
    }
    
}else if (c>=d)
    {
        printf("%d is the biggest number",c);
    }else{
        printf("%d is the biggest number",d);
    }
    return 0;
}

