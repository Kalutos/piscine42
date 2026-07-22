/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sardalle <sardalle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 00:05:49 by sardalle          #+#    #+#             */
/*   Updated: 2026/07/22 18:32:22 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	char	s1[] = "abc";
	char 	s2[] = "abd";
	int	n = 3;
	printf("%d\n", ft_strncmp(s1, s2, n));
}
