/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:16:42 by daniel            #+#    #+#             */
/*   Updated: 2023/10/04 12:08:01 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_str(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i ++;
	}
	return (0);
}

static int	str_posicion_atras(const char	*s1, const char	*s2)
{
	int	j;

	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (char_in_str(s1[j], s2))
			j--;
		else
			break ;
	}
	return (j);
}

static int	str_posicion_delante(const char	*s1, const char	*s2)
{
	int	j;

	j = 0;
	while (j < ft_strlen(s1))
	{
		if (char_in_str(s1[j], s2))
			j++;
		else
			break ;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	char	*str;
	int		num;
	int		j;

	j = str_posicion_delante(s1, set);
	num = str_posicion_atras(s1, set);
	str = ft_substr(s1, j, (num - j) + 1);
	if (!str)
		return (NULL);
	return (str);
}
