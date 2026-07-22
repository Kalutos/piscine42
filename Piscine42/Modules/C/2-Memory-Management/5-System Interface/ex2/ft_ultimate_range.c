#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, 3, 8);
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}