/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandurma <sandurma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 09:33:10 by sandurma          #+#    #+#             */
/*   Updated: 2024/10/20 09:47:13 by sandurma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	idx;
	int	sgn;
	int	res;

	res = 0;
	idx = 0;
	sgn = 1;
	while ((str[idx] >= 9 && str[idx] <= 13) || str[idx] == 32)
		idx++;
	if (str[idx] == '+' || str[idx] == '-')
	{
		if (str[idx] == '-')
			sgn *= -1;
		idx++;
	}
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		res = (res * 10) + (str[idx] - 48);
		idx++;
	}
	return (res * sgn);
}
