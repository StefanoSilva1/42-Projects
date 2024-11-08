/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdavi-al <sdavi-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:04:58 by sdavi-al          #+#    #+#             */
/*   Updated: 2024/10/28 21:47:14 by sdavi-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

// typedef struct s_format
// {
//     int     left_align;
//     int     zero_pad;
//     int     field_width;
//     int     precision;
//     int     alternate;
//     int     sign;
//     int     space;
// }   t_format;

size_t		ft_printchar(char c);
size_t		ft_printstr(const char *str);
int			num_length(int num);
char		*ft_itoa(int n);
int			ft_printnbr(int n);
int			ft_printptr(unsigned long ptr);
int			ft_print_hex(unsigned int num, const char format);
int			ft_printpercent(void);
int			ft_formatspc(va_list args, const char format);
int			ft_printf(const char *str, ...);
int			ft_printnbr_unsigned(unsigned int n);

#endif