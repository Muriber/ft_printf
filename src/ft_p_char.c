/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:17:13 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/23 09:20:27 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_p_char(int c)
{
	int	n_char;

	n_char = 1;
	ft_putchar_fd(c, 1);
	return (n_char);
}
