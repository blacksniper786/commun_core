/* #include<unistd.h>
void ft_putchar(char c)
{
    write(1 ,&c ,1);   
} */

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a ;
    *a = *b ;
    *b = tmp ;
}

#include<stdio.h>
int main()
{
    int i = 43 ;
    int j = 42 ;
    printf("%d %d\n",i,j);
    ft_swap(&i,&j);
    printf("%d %d\n",i,j);
}  