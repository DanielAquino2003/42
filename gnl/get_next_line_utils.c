/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:11:34 by daniel            #+#    #+#             */
/*   Updated: 2024/01/30 13:09:36 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (i + (str[i] == '\n'));
}

char	*ft_null_return(char *buffer)
{
	int	i;

	i = -1;
	while (buffer[++i])
		buffer[i] = 0;
	return (NULL);
}

char	*ft_cpy(char *source, char *extension)
{
	int		i;
	int		j;
	int		length_source;
	int		length_extension;
	char	*result;

	i = 0;
	j = 0;
	length_source = ft_strlen(source);
	length_extension = ft_strlen(extension);
	result = malloc(sizeof(char) * (length_source + length_extension + 1));
	if (!result)
		return (NULL);
	while (source && source[i])
	{
		result[i] = source[i];
		i++;
	}
	while (extension && j < length_extension)
	{
		result[i++] = extension[j++];
	}
	result[i] = '\0';
	free(source);
	return (result);
}

void	ft_manage_buffer(char *buffer, int *flag)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buffer[i])
	{
		if (*flag)
			buffer[j++] = buffer[i];
		if (buffer[i] == '\n')
			*flag = 1;
		buffer[i++] = 0;
	}
}
