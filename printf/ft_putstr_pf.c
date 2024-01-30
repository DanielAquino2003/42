/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:47 by daniel            #+#    #+#             */
/*   Updated: 2024/01/25 16:42:50 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}
/*int main()
{
    size_t counter = 0;
    char *str = "Hello, World!";

    ft_putstr_pf(str, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
