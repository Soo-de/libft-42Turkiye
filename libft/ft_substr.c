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

char	*cpytostr(char *dest, const char *src, size_t start, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i + start] && i < size - 1)
		{
			dest[i] = src[start + i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*subs;
	size_t			new_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return ((char *)ft_calloc(sizeof(char), 1));
	if (len > ft_strlen(s + start))
		new_len = ft_strlen(s + start);
	else
		new_len = len;
	subs = ft_calloc(sizeof(char), new_len + 1);
	if (!subs)
		return (NULL);
	return (cpytostr((char *)subs, s, start, new_len + 1));
}
