/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:42:54 by daniel            #+#    #+#             */
/*   Updated: 2024/01/28 12:21:43 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int num, size_t *counter)
{
	char	*str;

	str = ft_aux_pf(num, "0123456789");
	ft_putstr_pf(str, counter);
	free(str);
}
/*int main()
{
    size_t counter = 0;
    unsigned int num = 1234567890;

    ft_putuint_pf(num, &counter);
    printf("\nPrinted %zu characters.\n", counter);

    return 0;
}*/
