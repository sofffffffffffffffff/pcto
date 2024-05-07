#include<stdio.h>

int main()
{
    //while= è come un if  che ripete il codice dentro le parentesi se la condizione è vera
    int n;
    scanf("%d",&n);
    printf("il tuo numero è:%d\n",n);
    while(n<=100)
    {
        printf("%d\n",n);
        n=n+1;
    }
}