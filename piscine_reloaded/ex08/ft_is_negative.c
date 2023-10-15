/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

void ft_is_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

/* #include<stdlib.h>
int main(int ac, char **av)
{
    (void)ac;
    ft_is_negative(atoi(av[1]));
} */