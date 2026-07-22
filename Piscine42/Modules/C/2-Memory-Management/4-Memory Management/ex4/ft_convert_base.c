// ft_convert_base.c
#include <stdlib.h>

char	*convert_from_base(char *nbr, char *base_from, int *value, int *sign);
char	*build_result(int value, int sign, char *base_to);

static int	base_is_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (base[len] != '\0')
		len++;
	if (len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		value;
	int		sign;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	if (convert_from_base(nbr, base_from, &value, &sign) == NULL)
		return (NULL);
	return (build_result(value, sign, base_to));
}