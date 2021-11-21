/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassofi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:45:44 by eassofi           #+#    #+#             */
/*   Updated: 2021/11/19 20:04:35 by eassofi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
#include <limits.h>

int     ft_printf(const char *, ...);
int     ft_putchar(char c, int count);
int     ft_putstr(const char *s, int count);
int     ft_putnbr_uint(unsigned int n, int count);
int     print_hex_lowercase(unsigned long int n, int count);
int     print_hex_uppercase(unsigned long int n, int count);
int     ft_putnbr_int(int n, int count);

#endif
