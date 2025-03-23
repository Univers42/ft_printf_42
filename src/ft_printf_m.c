/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:38:59 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 14:05:06 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_d(int n)
{
    char *str;

    str = ft_itoa(n);
    ft_putstr_fd(str, STDOUT_FILENO);
}

void ft_printf_c(char c)
{
    ft_putchar_fd(c, STDOUT_FILENO);
}

void ft_printf_s(char *str)
{
    if(!str)
        ft_putstr_fd("(null)", STDOUT_FILENO);
    ft_putstr_fd(str, STDOUT_FILENO);
}

void ft_printf_percent(void)
{
    ft_putchar_fd('%', STDOUT_FILENO);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    
    if (!format)
        return ;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            if (*format == 'd' || *format == 'i')
                ft_printf_d(va_arg(args, int));
            else if (*format == 'c')
                ft_printf_c(va_arg(args, int));
            else if (*format == 's')
                ft_printf_s(va_arg(args, char *));
            else if (*format == 'p')
                ft_printf_p(va_arg(args, void *));
            else if (*format == 'x')
                ft_printf_x(va_arg(args, unsigned int));
            else if (*format == 'X')
                ft_printf_X(va_arg(args, unsigned int));
            else if (*format == 'u')
                ft_printf_u(va_arg(args, unsigned int));
            else if (*format == '%')
                ft_printf_c('%');
        }
        else
            ft_putchar_fd(*format, 1);
        format++;
    }
    va_end(args);
    return (i);
}
