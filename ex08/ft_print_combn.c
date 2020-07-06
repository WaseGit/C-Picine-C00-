#include <unistd.h>

void ft_putchar(char a); 

void ft_putnbr (int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10 ); 
		ft_putchar(nb % 10 + '0');
	   if(nb < 0 )
	   {
		   ft_putchar('-');
	   }
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	
	}
}

int ft_is_valid(int n)
{
	return 1 ; 
}

void ft_print_sorted_combinations(int max)
{
	int i; 
	i = 1; 
	while (i <= max )
	{
		if (ft_is_valid(i) == 1 )
		{
			ft_putnbr(i);
			ft_putchar('-'); 
		}
		i++; 
	}
}

void ft_print_combn(int n )
{
	int max; 
	max = 1 ; 
	while (n)
	{
		max *= 10; 
		n-- ; 
	}
	ft_print_sorted_combinations(max - 1);
}








