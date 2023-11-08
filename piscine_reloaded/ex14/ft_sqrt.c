/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

int ft_sqrt(int nb)
{
    int i ;
    int j;
    i = 1 ;
   
    if ( nb <= 2 || nb > 2147395600)
        return 0 ;
    while( i <= (nb / 2) )
    {
            if( i * i == nb )
                return i ;
            i ++;
    }
    return 0;
}

/* int		ft_sqrt(int nb)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine = racine + 1;
	}
	return (0);
} */

#include<stdio.h>
#include<stdlib.h>
int main(int ac , char **av)
{
    (void)ac;
    int result = ft_sqrt(atoi(av[1]));
    printf("sqrt of %d is %d \n",atoi(av[1]) ,result);
    return 0;
    
}

