#include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
}


void ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}



#include<stdio.h>
#include<stdlib.h>
int main(int ac , char **av)
{
    (void)ac;
    ft_putstr(av[1]);
    printf("\n");
    return 0;
    
}

