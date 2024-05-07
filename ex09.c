#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("il tuo numero è:%d\n",a);
    printf("il tuo numero è:%d\n",b);
    printf("il tuo numero è:%d\n",c);

    if(a+b>c && b+c>a && c+a>b)
    {
        printf("è un triangolo");

        if(a==b && b==c && c==a)
        {
        printf(" equilatero");
        }
        else if((a==b) ||(b==c) || (c==a))
        {
        printf(" isoscele");
        }
        else
        {
        printf(" scaleno");
        }
    }
    else
    {
        printf("non è un triangolo");
    }
}
