// ft_convert_base2.c
#include <stdlib.h>

static int	char_index(char *base, char c)
{
	int (i) = 0;

	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*convert_from_base(char *nbr, char *base_from, int *value, int *sign)
{
	int	(base_len) = 0;
	int	idx;
	int	(i) = 0;

	while (base_from[base_len] != '\0')
		base_len++;
	*sign = 1;
	if (nbr[0] == '-')
	{
		*sign = -1;
		i = 1;
	}
	*value = 0;
	if (nbr[i] == '\0')
		return (NULL);
	while (nbr[i] != '\0')
	{
		idx = char_index(base_from, nbr[i]);
		if (idx == -1)
			return (NULL);
		*value = *value * base_len + idx;
		i++;
	}
	return (nbr);
}

static int	count_digits(int value, int base_len)
{
	int	(count) = 0;

	if (value == 0)
		return (1);
	while (value != 0)
	{
		value /= base_len;
		count++;
	}
	return (count);
}

char	*build_result(int value, int sign, char *base_to)
{
	int		(base_len) = 0;
	int		len;
	int		i;
	char	*res;

	while (base_to[base_len] != '\0')
		base_len++;
	len = count_digits(value, base_len);
	res = malloc(sizeof(char) * (len + (sign == -1 && value != 0) + 1));
	if (res == NULL)
		return (NULL);
	i = len;
	res[i--] = '\0';
	if (value == 0)
		res[0] = base_to[0];
	while (value != 0)
	{
		res[i--] = base_to[value % base_len];
		value /= base_len;
	}
	if (sign == -1 && res[0] != base_to[0])
	{
		len = 0;
		while (res[len] != '\0')
			len++;
		while (len >= 0)
		{
			res[len + 1] = res[len];
			len--;
		}
		res[0] = '-';
	}
	return (res);
}
