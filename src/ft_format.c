/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:31:03 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 12:52:48 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printf_p(void *p)
{
    char *str;
    if (!p)
    {
        ft_putstr_fd("(nil)", STDOUT_FILENO);
        return ;
    }
    str = ft_itoa_base((unsigned long long)p, 16);
    ft_putstr_fd("0x", STDOUT_FILENO);
    ft_putstr_fd(str, STDOUT_FILENO);
}

void ft_printf_x(unsigned int n)
{
    char *str;

    str = ft_itoa_base(n, 16);
    ft_putstr_fd(str, STDOUT_FILENO);
}

void ft_printf_X(unsigned int n)
{
    char *str;

    str = ft_itoa_base(n, 16);
    ft_strtoupper(str);
    ft_putstr_fd(str, STDOUT_FILENO);
}

void ft_printf_u(unsigned int n)
{
    char *str;

    str = ft_utoa(n);
    ft_putstr_fd(str, STDOUT_FILENO);
}
