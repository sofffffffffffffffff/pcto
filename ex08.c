
{
    int a;
    scanf("%d", &a);
    printf("il tuo numero è:%d\n",a);
    //&& = and
    //|| = or
    //! = not
    if((a>18 && a<30) || (a>60 && a<100))
    {
        printf("giusto");
    }
    else
    {
    printf("sbagliato");
    }
}