/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:31:08 by aselva            #+#    #+#             */
/*   Updated: 2026/07/14 11:33:34 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	if (length <= 1)
		return (1);
	asc = 1;
	desc = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

static int	compare(int a, int b)
{
	return (a - b);
}
/*
#include <stdio.h>

int	main(void)
{
	int	sorted[5];
	int	unsorted[5];

	sorted [5] = {1, 2, 3, 4, 5};
	unsorted[5] = {1, 3, 2, 4, 5};
	printf("%d\n", ft_is_sort(sorted, 5, &compare));
	printf("%d\n", ft_is_sort(unsorted, 5, &compare));
	return (0);
}
*/
