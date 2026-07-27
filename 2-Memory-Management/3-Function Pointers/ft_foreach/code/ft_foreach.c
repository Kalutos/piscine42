/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:20:06 by aselva            #+#    #+#             */
/*   Updated: 2026/07/14 11:20:34 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

static void	print_int(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &print_int);
	printf("\n");
	return (0);
}
*/
