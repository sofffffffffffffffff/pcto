#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("il tuo numero è:%d\n",a);
    if(a==1969)
    {
        printf("ciao caro sei nato l'anno in cui l'uomo è andato sulla luna");
    }
    else if( a>1969)
    { 
       printf(" sei nato %d anni dopo\n", a-1969);
    }
    else
    {
        printf(" sei nato %d annni prima\n", 1969-a);
    }
}