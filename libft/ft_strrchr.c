/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:45:06 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 04:20:00 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = (int)ft_strlen(str);
	if ((char)c == '\0')
	{
		return ((char *)(str + len));
	}
	while (len > 0)
	{
		if (str[len - 1] == (char)c)
		{
			return ((char *)(str + len - 1));
		}
		len--;
	}
	return (NULL);
}
