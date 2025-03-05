/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:47:54 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 04:03:56 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d ;
	const unsigned char	*s ;

	d = (unsigned char *)dest;
	s = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
