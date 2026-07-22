#include <stdlib.h>

static int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (!is_sep(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_sep(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*extract_word(char *str, char *charset, int *i)
{
	int		start;
	int		len;
	char	*word;
	int		j;

	start = *i;
	while (str[*i] != '\0' && !is_sep(str[*i], charset))
		(*i)++;
	len = *i - start;
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = str[start + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		nb_words;
	int		i;
	int		idx;

	nb_words = count_words(str, charset);
	res = malloc(sizeof(char *) * (nb_words + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	idx = 0;
	while (idx < nb_words)
	{
		while (is_sep(str[i], charset))
			i++;
		res[idx] = extract_word(str, charset, &i);
		idx++;
	}
	res[idx] = 0;
	return (res);
}

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("Hello, World, 42!", ", ");
	i = 0;
	while (res[i] != 0)
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}