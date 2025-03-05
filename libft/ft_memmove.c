/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:00:17 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 04:23:46 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	i = -1;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (++i < len)
		{
			d[i] = s[i];
		}
	}
	else if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	return (dest);
}
