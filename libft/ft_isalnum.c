/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlesieur <dlesieur@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 12:32:35 by dlesieur          #+#    #+#             */
/*   Updated: 2025/01/27 21:29:55 by dlesieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//#include "TDD/test.h"
/**
 * Checks if the given character is alphanumeric.
 * An alphanumeric character is either a digit (0-9) or a letter (A-Z, a-z).
 * 
 * @param c The character to check (represented as an int, typically 
 * çfrom an unsigned char or EOF).
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//int ft_isspace(int c)
//{
//	return(c == ' ');
//}
//int is_valid_product_code(const char *code) {
//    int strlen;
//
//    strlen = ft_strlen(code);
//    if (code == NULL || strlen < 2 || !ft_isalnum(*code))
//        return 0;
//    for (int i = 0; i < strlen - 1; i++) {
//        if (!ft_isalnum(code[i]))
//            return 0;
//    }
//    if (ft_isspace(code[strlen - 4]) 
//        && !ft_isdigit(code[strlen - 3]) 
//        && !ft_isalnum(code[strlen - 2]) 
//        && ft_isalnum(code[strlen - 1]))
//        return 0;
//    return 1;
//}
//
//int main(void) {
//    char product_code[100];
//
//    printf("Enter the product code [i.e. f2133as1121fd5v1fdd54fd1]: ");
//    fgets(product_code, sizeof(product_code), stdin);
//    
//    product_code[strcspn(product_code, "\n")] = 0;
//    
//    if (is_valid_product_code(product_code))
//        printf("The product code '%s' is valid!\n", product_code);
//    else
//        printf("The product code '%s' is invalid.\n", product_code);
//
//    return 0;
//}