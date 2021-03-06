/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:27:26 by swahb             #+#    #+#             */
/*   Updated: 2020/07/06 18:29:54 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				ft_putchar (char c);
void		ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + '0');
		
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	   if (nb < 0)
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
