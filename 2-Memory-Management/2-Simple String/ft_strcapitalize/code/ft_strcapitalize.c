/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:36:59 by aselva            #+#    #+#             */
/*   Updated: 2026/07/13 12:20:48 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (!is_alnum(str[i]))
			new_word = 1;
		else
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			new_word = 0;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "hello, how are you doing? 42words forty-two; fifty+and+one";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
