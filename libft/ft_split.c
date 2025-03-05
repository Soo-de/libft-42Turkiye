/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:37:37 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 03:53:48 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (str[idx])
	{
		if (str[idx] == c)
			idx++;
		else
		{
			while (str[idx] && str[idx] != c)
				idx++;
			count++;
		}
	}
	return (count);
}

char	*allocate_word(char const *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**free_splitted(char **mtrx)
{
	size_t	i;

	i = -1;
	while (!!mtrx[++i])
		free(mtrx[i]);
	free(mtrx);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	char	**splitted;

	words = count_words(s, c);
	splitted = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	if (!splitted)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			splitted[i] = allocate_word(s, c);
			if (!splitted[i++])
				return (free_splitted(splitted));
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	splitted[i] = NULL ;
	return (splitted);
}
