#include<stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    
    printf("il tuo numero è: %d\n", a);

    if(a>18)
    {
        printf("l'utente è maggiorenne");
    }
    else
    {
        printf("l'utente non è maggiorenne");
    }
}