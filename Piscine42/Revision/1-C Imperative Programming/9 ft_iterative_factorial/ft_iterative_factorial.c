/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:50:15 by aselva            #+#    #+#             */
/*   Updated: 2026/07/15 14:16:54 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if(nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return i = i* nb;
		nb--;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(7));
	return(0);
}
