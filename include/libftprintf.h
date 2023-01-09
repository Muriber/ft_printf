/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjimenez <bjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:11:00 by bjimenez          #+#    #+#             */
/*   Updated: 2022/05/23 09:18:40 by bjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(char const *type, ...);
int	ft_hex(unsigned int n, char c);
int	ft_put_unbr(unsigned int n);
int	ft_dirptr(unsigned long long p);
int	ft_p_char(int c);
int	ft_p_id(int n);
int	ft_p_str(char *str);

#endif