/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b)
    {
        *div = a/b ;
        *mod = a%b ;
    }
}

/* #include<stdio.h>
int main()
{
    int i = 11 ;
    int j = 2 ;
    int a = 1 ;
    int b = 0 ;
    int *div = &a;
    int *mod = &b;

    printf("%d %d\n",*div,*mod);
    ft_div_mod(i,j,div,mod);
    printf("%d %d\n",*div,*mod);
} */