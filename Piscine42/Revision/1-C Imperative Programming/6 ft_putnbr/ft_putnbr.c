/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 10:27:32 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 11:24:41 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-",1);
		ft_putnbr(-nb); //
	}
	else if(nb >=10)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';	
		write(1, &c, 1);
	}
}

int	main()

{
	ft_putnbr(0);
	ft_putnbr(25);
	ft_putnbr(-50);
	ft_putnbr(485);
	return (0);
}
