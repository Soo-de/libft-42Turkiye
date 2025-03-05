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

void	reverse_arr(char *arr, int len)
{
	int		i;
	char	temp;

	i = 0;
	while (i < len / 2)
	{
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	arr[12];
	int		i;

	i = 0;
	num = n;
	if (num < 0)
	{
		num = 1 + ~num;
		write(fd, "-", 1);
	}
	if (num == 0)
		arr[i++] = '0';
	while (num > 0)
	{
		arr[i++] = '0' + (num % 10);
		num /= 10;
	}
	reverse_arr(arr, i);
	arr[i] = '\0';
	ft_putstr_fd(arr, fd);
}
