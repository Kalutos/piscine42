#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*copy;

	copy = ft_strdup("Bonjour");
	printf("%s\n", copy);
	free(copy);
	return (0);
}
