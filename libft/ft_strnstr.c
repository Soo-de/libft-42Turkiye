/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 06:45:15 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 09:32:52 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	j;
	size_t	l;
	char	*hay;

	hay = (char *)haystack;
	idx = 0;
	l = len;
	if (*needle == '\0')
		return (hay);
	while (hay[idx] && l > 0)
	{
		j = 0;
		while (hay[idx + j] == (char)needle[j] && needle[j] && (idx + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return (hay + idx);
		}
		l--;
		idx++;
	}
	return (NULL);
}
