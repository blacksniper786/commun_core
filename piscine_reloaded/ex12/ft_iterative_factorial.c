/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */
// when i test with 000000000 (9 digits) it works
// with 10 digits time > 2s (requierd in subject)
//
//
// but it is cool for now
//
//
int ft_iterative_factorial(int nb)
{
    int i ;
    i = nb - 1;
    if( nb == 0 || nb == 1)
    {
        return 1 ;
    }else if (nb < 0 )
	    return 0 ;
    else
    {
    while ( i > 0 && nb <= 2147483647)
        nb *= (i--);
    return nb ;
    }
}


#include<stdio.h>
#include<stdlib.h>
int main(int ac , char **av)
{
    (void)ac;
        int result = ft_iterative_factorial(atoi(av[1]));
        printf("The factorial of %d is %d\n", atoi(av[1]), result);
        return 0;
    
}

