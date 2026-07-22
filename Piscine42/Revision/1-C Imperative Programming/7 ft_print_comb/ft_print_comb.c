/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 11:26:22 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 11:43:29 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_put(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != '7' || j != '8' || k != '9')
        {
		write(1, ", ", 2);
		k++;
	}
}
void ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_put(i, j, k);
				k++;		
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
