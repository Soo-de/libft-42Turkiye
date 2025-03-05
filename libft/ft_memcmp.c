/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:27:32 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 04:01:49 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p2 = (const unsigned char *) ptr2;
	p1 = (const unsigned char *) ptr1;
	while (num > 0 && *p1 == *p2)
	{
		num--;
		p1++;
		p2++;
	}
	if (num == 0)
		return (0);
	return ((int)(*p1 - *p2));
}
