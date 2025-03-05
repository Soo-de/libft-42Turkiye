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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*n_s;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	n_s = ft_calloc(sizeof(char), len1 + len2 + 1);
	if (!n_s)
		return (NULL);
	ft_memmove(n_s, s1, len1 + 1);
	ft_memmove(n_s + len1, s2, len2 + 1);
	n_s[len1 + len2] = '\0';
	return (n_s);
}
