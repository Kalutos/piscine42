/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:22:15 by aselva            #+#    #+#             */
/*   Updated: 2026/07/14 11:24:39 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(sizeof(int) * length);
	if (new_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}
/*
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

static int	square(int n)
{
	return (n * n);
}

int	main(void)
{
	int	tab[4];
	int	*res;
	int	i;

	tab[4] = {1, 2, 3, 4};
	res = ft_map(tab, 4, &square);
	i = 0;
	while (i < 4)
	{
		printf("%d ", res[i]);
		i++;
	}
	printf("\n");
	free(res);
	return (0);
}*/
