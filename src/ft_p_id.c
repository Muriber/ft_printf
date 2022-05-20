/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_id.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:21:23 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/20 13:40:42 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_p_id(int n)
{
	int	i;

	i = 0;
	ft_putnbr_fd(n, 1);
	if (n == INT_MIN)
		n++;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
