/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 11:25:11 by aselva            #+#    #+#             */
/*   Updated: 2026/07/14 11:27:13 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *));

static int	is_empty(char *str)
{
	return (str[0] == '\0');
}

int	main(void)
{
	char	*tab[4];

	*tab[4] = {"hello", "", "world", 0};
	printf("%d\n", ft_any(tab, &is_empty));
	return (0);
}
*/
