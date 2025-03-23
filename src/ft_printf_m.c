/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_m.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syzygy <syzygy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:38:59 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 17:40:41 by syzygy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Modified to return number of characters printed
int ft_printf_d(int n)
{
    char *str;
    int len;

    if (n == INT_MIN)
    {
        ft_putstr_fd("-2147483648", STDOUT_FILENO);
        return (ft_putstr_fd("-2147")11);
    }
    str = ft_itoa(n);
    if (!str)
        return (0);
    len = ft_strlen(str);
    ft_putstr_fd(str, STDOUT_FILENO);
    return (free(str), len);
}

// Modified to return 1 (one character printed)
int ft_printf_c(char c)
{
    ft_putchar_fd(c, STDOUT_FILENO);
    return (1);
}

// Modified to return string length
int ft_printf_s(char *str)
{
    if (!str)
    {
        ft_putstr_fd("(null)", STDOUT_FILENO);
        return (6); // Length of "(null)"
    }
    ft_putstr_fd(str, STDOUT_FILENO);
    return (ft_strlen(str));
}

// Modified to return 1 (one character printed)
int ft_printf_percent(void)
{
    ft_putchar_fd('%', STDOUT_FILENO);
    return (1);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0; // To track the number of characters printed
    
    if (!format)
        return (-1); // Changed to -1 as standard error value
    
    va_start(args, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            if (*format == 'd' || *format == 'i')
                count += ft_printf_d(va_arg(args, int));
            else if (*format == 'c')
                count += ft_printf_c(va_arg(args, int));
            else if (*format == 's')
                count += ft_printf_s(va_arg(args, char *));
            else if (*format == 'p')
                count += ft_printf_p(va_arg(args, void *));
            else if (*format == 'x')
                count += ft_printf_x(va_arg(args, unsigned int));
            else if (*format == 'X')
                count += ft_printf_X(va_arg(args, unsigned int));
            else if (*format == 'u')
                count += ft_printf_u(va_arg(args, unsigned int));
            else if (*format == '%')
                count += ft_printf_percent();
        }
        else
        {
            ft_putchar_fd(*format, 1);
            count++; // Count regular characters too
        }
        format++;
    }
    va_end(args);
    return (count); // Return total characters printed
}
