/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:17:13 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/20 12:56:19 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

void	ft_putchar_fd(char c, int fd);

int	ft_p_char(int c)
{
	int	n_char;

	n_char = 1;
	ft_putchar_fd(c, 1);
	return (n_char);
}
