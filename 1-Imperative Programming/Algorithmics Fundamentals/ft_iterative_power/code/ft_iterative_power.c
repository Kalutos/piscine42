/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 16:46:03 by aselva            #+#    #+#             */
/*   Updated: 2026/07/08 11:23:10 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	compteur;
	int	i;

	compteur = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		compteur *= nb;
		i++;
	}
	return (compteur);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(-5, 3));
	printf("%d\n", ft_iterative_power(2, 10));
	return (0);
}*/
