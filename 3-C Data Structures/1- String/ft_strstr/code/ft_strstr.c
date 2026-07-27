/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sardalle <sardalle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:21:46 by sardalle          #+#    #+#             */
/*   Updated: 2026/07/22 18:35:22 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	char	str[] = "aaaabcdefcdghcd";
	printf("test 1 : %s\n", ft_strstr(str, "cd"));
	printf("test 2 : %s\n", ft_strstr(str, "gh"));
	printf("test 3 : %s\n", ft_strstr(str, "aaab"));
}
