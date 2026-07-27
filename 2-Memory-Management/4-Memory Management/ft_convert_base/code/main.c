#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*res;

	res = ft_convert_base("42", "0123456789", "01");
	printf("%s\n", res); // 101010
	free(res);
	res = ft_convert_base("-2A", "0123456789ABCDEF", "0123456789");
	printf("%s\n", res); // -42
	free(res);
	return (0);
}