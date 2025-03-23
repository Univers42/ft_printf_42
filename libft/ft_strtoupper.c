/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 07:51:16 by dlesieur          #+#    #+#             */
/*   Updated: 2025/03/23 07:59:28 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

char	*ft_strtoupper(char *str)
{
	char *ptr = str;
	while (*ptr)
		*ptr = ft_toupper(*ptr++);
	return (str);
}