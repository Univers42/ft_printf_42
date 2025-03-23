/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syzygy <syzygy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 08:09:53 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 16:10:25 by syzygy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"


int ft_printf(const char *format, ...);
int ft_printf_d(int n);
int ft_printf_c(char c);
int ft_printf_s(char *str);
int ft_printf_percent(void);
int ft_printf_p(void *p);
int ft_printf_x(unsigned int n);
int ft_printf_X(unsigned int n);
int ft_printf_u(unsigned int n);
    
#endif