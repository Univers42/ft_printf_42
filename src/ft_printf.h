/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 08:09:53 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 08:12:10 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

    void ft_printf(const char *format, ...);
    void ft_printf_d(int n);
    void ft_printf_c(char c);
    void ft_printf_s(char *str);
    void ft_printf_percent(void);
    void ft_printf_p(void *p);
    void ft_printf_x(unsigned int n);
    void ft_printf_X(unsigned int n);
    void ft_printf_u(unsigned int n);
    
#endif