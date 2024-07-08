/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:27:57 by hshehab           #+#    #+#             */
/*   Updated: 2024/07/02 18:11:39 by hshehab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_putstr(char *s);
int		print_int(int n);
int		print_unsigned_long_long(unsigned long long n);
int		print_ul(unsigned long n);
int		print_hexab(unsigned int n);
int		print_hexas(unsigned int n);
int		print_hexap(unsigned long long p);
int		print_ui(unsigned int n);

#endif