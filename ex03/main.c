#include <unistd.h>

int ft_print_numbers (void )
{
	char a = '0'; 
	while (a <= '8' )
	{
		write(1 , &a , 1 );
		a++; 
	}
}

int main (void)
{
	ft_print_numbers();
    return 0; 
}   
