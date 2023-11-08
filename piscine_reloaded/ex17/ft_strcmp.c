/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 || *s2)
    {
        if ( (*s1 - *s2) )
            return (*s1 - *s2) ;
        s1++;
        s2++;
    }
    return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int ac , char **av)
{
    (void)ac;
    printf("original %d \n", strcmp(av[1],av[2])); 
    printf("china    %d \n", ft_strcmp(av[1],av[2]) ); 
    return 0;
    
}

