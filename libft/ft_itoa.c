/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:17:02 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:06:36 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{	
		n *= -1;
		len ++;
	}
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

int	power(int n, int p)
{
	size_t	result;

	result = 1;
	if (p < 0)
		return (0);
	while (p > 0)
	{
		result *= n;
		p--;
	}
	return (result);
}

void	is_negative(int *len, int *i, int *n, char *c)
{
	*len = *len - 1;
	*i = *i + 1;
	*n *= -1;
	*c = '-';
}

void	is_min_int(char *str, int *n, int *len, int *i)
{
	str[0] = '-';
	str[1] = '2';
	*n = 147483648;
	*len -= 2;
	*i = 2;
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;
	int		i;

	i = 0;
	len = int_len(n);
	number = malloc((len + 1) * sizeof(char));
	if (!number)
		return (NULL);
	if (n == -2147483648)
		is_min_int(number, &n, &len, &i);
	if (n < 0)
		is_negative(&len, &i, &n, &number[i]);
	len --;
	while (len >= 0)
	{
		number[i] = (n / (power(10, len))) + '0';
		n = n % (power(10, len));
		i ++;
		len --;
	}
	number[i] = '\0';
	return (number);
}
