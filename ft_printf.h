/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:46:26 by jbutte            #+#    #+#             */
/*   Updated: 2022/11/13 17:16:37 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		type_to_print(va_list lst, char format);
int		check_format(char c);
size_t	ft_strlen(const char *str);
void	ft_putchar_printf(char c, int *value);
void	ft_putstr_printf(char *s, int *value);
void	ft_putnbr_printf(long int n, char *base, int *value);
void	ft_putpointer_printf(unsigned long n, char *base,
			int *boolp, int *value);

#endif
