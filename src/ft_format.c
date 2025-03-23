/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syzygy <syzygy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:31:03 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 17:38:26 by syzygy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_p(void *p)
{
    char *str;
    int len;
    
    if (!p)
        return (ft_putstr_fd("(nil)", STDOUT_FILENO), 5);
    str = ft_itoa_base((unsigned long long)p, 16);
    if (!str)
        return (0);
    (ft_putstr_fd("0x", STDOUT_FILENO), ft_putstr_fd(str, STDOUT_FILENO));
    len = ft_strlen(str) + 2;
    return (free(str), len);
}

int ft_printf_x(unsigned int n)
{
    char *str;
    int len;

    str = ft_itoa_base(n, 16);
    if (!str)
        return (0);
    ft_putstr_fd(str, STDOUT_FILENO);
    len = ft_strlen(str);
    return (free(str), len);
}

int ft_printf_X(unsigned int n)
{
    char *str;
    int len;

    str = ft_itoa_base(n, 16);
    if (!str)
        return (0);
    (ft_strtoupper(str), ft_putstr_fd(str, STDOUT_FILENO));
    len = ft_strlen(str);
    return (free(str), len);
}

int ft_printf_u(unsigned int n)
{
    char *str;
    int len;

    str = ft_utoa(n);
    if (!str)
        return (0);
    ft_putstr_fd(str, STDOUT_FILENO);
    len = ft_strlen(str);
    return (free(str), len);
}
