/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

int ft_recursive_factorial(int nb)
{
    /* int i ;
    i = nb - 1; */
    if( nb < 0 || nb >= 2147483647)
        return 0 ;
    else if (nb == 0 || nb == 1 /* || nb >= 2147483647 */)
        return 1 ;
    else if( nb >= 214483647)
        return nb ;
    else
        return (ft_recursive_factorial(nb - 1) * nb) ;
}


#include<stdio.h>
#include<stdlib.h>
int main(int ac , char **av)
{
    (void)ac;
    (void)av;
    int nb = 123456789 ;
    //int result = ft_recursive_factorial(atoi(av[1]));
    int result = ft_recursive_factorial(nb);
    printf("The factorial of %d is %d\n", nb, result);
    //printf("The factorial of %d is 0 \n", atoi(av[1]));
    return 0;
    
}

