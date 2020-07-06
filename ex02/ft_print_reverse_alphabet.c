  
int ft_print_reverse_alphabet (void)
{

	char lettres  = 'z';

while (lettres >= 'a')
{
  
   	write(1 , &lettres  , 1);
    lettres--;  
}

}

int main (void)
{

   ft_print_reverse_alphabet(); 
   return 0; 

}


