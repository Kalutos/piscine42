/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselva <aselva@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:08:06 by aselva            #+#    #+#             */
/*   Updated: 2026/07/20 17:11:23 by aselva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strlen_local(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += strlen_local(strs[i]);
		if (i != size - 1)
			total += strlen_local(sep);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		pos;
	int		i;
	int		j;

	res = malloc(sizeof(char) * (total_len(size, strs, sep) + 1));
	if (res == NULL)
		return (NULL);
	pos = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			res[pos++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				res[pos++] = sep[j++];
		}
		i++;
	}
	res[pos] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[3] = {"Hello", "World", "42"};
	char	*res;

	res = ft_strjoin(3, strs, ", ");
	printf("%s\n", res); // Hello, World, 42
	free(res);
	return (0);
}
*/
