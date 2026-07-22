/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:44:12 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 12:01:28 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	k;
	char	o;

	k = '0';
	while (k <= 98)
	{

		o = k + 1;
		while (o <= 99)
		{
			ft_put(k / 10 + '0');	
			ft_put(k % 10 +'0');
			ft_put(' ');
			ft_put(o / 10 + '0');
			ft_put(o % 10 + '0');
			if (k != 98 || o != 99)
			{
				write(1, ", ", 2);
			
			}
			o++;
		}
		k++;
	}
}


int	main()
{
	ft_print_comb2();
	return(0);
}
