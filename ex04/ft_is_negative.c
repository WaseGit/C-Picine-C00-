#include <unistd.h>


void ft_is_negative (int n )
{

  if (n <= 0)
  { 
	  write(1 , &n , 1 ); 
		  printf ("N"); 
  
  
  }else if (n >= 0 )
  {
	  write(1 , &n , 1 );
	  printf("P");
  
  }

}

int main (void)
{
	ft_is_negative(4); 
    return 0; 
}
