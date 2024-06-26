/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:23:55 by moassi            #+#    #+#             */
/*   Updated: 2024/06/06 15:34:13 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_format
{
	char	flag;
	int		width;
	int		precision;
	char	specifier;
}			t_format;

int		ft_printf(const char *str, ...);

void	ft_parse_format_specifier(const char **str, int *len, va_list args);

void	ft_no_flag(int *len, va_list args, t_format *format);
void	ft_left_align(int *len, va_list args, t_format *format);

void	ft_rightalign_s(int *len, va_list args, t_format *format);
void	ft_rightalign_c(int *len, va_list args, t_format *format);

void	ft_zero_pad(int *len, va_list args, t_format *format);
void	ft_hexa(int *len, va_list args, t_format *format);
void	ft_plus_sign(int *len, va_list args, t_format *format);
void	ft_space_flag(int *len, va_list args, t_format *format);

int		ft_strcontain(const char *str, char c);
int		ft_strlen_format_specifier(const char *str);
int		ft_putstr_n(const char *str, int precision);
int		ft_numlen(long nb, int base_len);
int		calc_nums_len(va_list args, char specifier, long *num);

//testing

void	ft_printf_test(void);
void	ft_printf_test_c(void);
void	ft_printf_test_d(void);
void	ft_printf_test_i(void);
void	ft_printf_test_u(void);

void	ft_printf_test_x(void);
void	ft_printf_test_bx(void);
void	ft_printf_test_s(void);
void	ft_printf_test_p(void);

void	ft_printf_test_leftalign(void);
void	ft_printf_test_zeroflag(void);
void	ft_printf_test_rightalign(void);

#endif
//valgrind --leak-check=full