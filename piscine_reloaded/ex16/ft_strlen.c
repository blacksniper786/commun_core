#include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
}


int ft_strlen(char *str)
{
    int i ;
    i = 0 ;
    while(*str)
    {
        i++;
        str++;
    }
    return i ;
}



#include<stdio.h>
#include<stdlib.h>
int main(int ac , char **av)
{
    (void)ac;
    int j = ft_strlen(av[1]);
    printf(" %d \n", j);
    return 0;
    
}

