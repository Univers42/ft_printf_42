/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_format_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:00:00 by dyl-syzygy        #+#    #+#             */
/*   Updated: 2025/03/23 23:34:16 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf_bonus.h"

/**
 * Prints prefix components - character and/or string
 */
int	ft_print_prefix(char prefix_char, char *prefix_str, int prefix_str_len)
{
	int	count;

	count = 0;
	if (prefix_char)
		count += ft_print_c(prefix_char);
	if (prefix_str)
		count += write(1, prefix_str, prefix_str_len);
	return (count);
}
