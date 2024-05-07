#include<stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("il tuo numero è:%d\n",a);
    printf("il tuo numero è:%d\n",b);
    
    if(a>b)
    {
        printf("a è > di b");
    }
    else if(a == b)
    {
        printf("a è = a b");
    }
    
    else// non ha bisogno di nessuna condizione
    {
        printf("a è < di b");
    }
}