/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:27:46 by aselva            #+#    #+#             */
/*   Updated: 2026/07/14 11:30:48 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int	ft_count_if(char **tab, int length, int (*f)(char *));

static int	is_empty(char *str)
{
	return (str[0] == '\0');
}
/*
#include <stdio.h>

int	main(void)
{
	char	*tab[4];

	*tab[4] = {"hello", "", "", "world"};
	printf("%d\n", ft_count_if(tab, 4, &is_empty));
	return (0);
}
*/
