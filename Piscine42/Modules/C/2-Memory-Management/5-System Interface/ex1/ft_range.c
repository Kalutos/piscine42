#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(3, 8);
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	free(tab);
	return (0);
}