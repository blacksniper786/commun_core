#include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
}

#include<stdlib.h>
#include<string.h>
int main(int ac , char **av)
{
    int i ;
    int j ;
    i = 1 ;
    j = 0 ;
    if( ac > 1)
    {
        while(*av[i])
        {
            while(av[i][j])
            {
                ft_putchar(av[i][j]);
                j++;
            }
            ft_putchar('\n');
            i++;
        }
    }
    return 0;    
}

