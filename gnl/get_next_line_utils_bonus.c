/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:12:02 by daniel            #+#    #+#             */
/*   Updated: 2024/01/25 17:43:21 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*ft_cpy(char *line, char *old)
{
	int		i;
	int		j;
	int		len2;
	int		len1;
	char	*new_line;

	i = 0;
	j = 0;
	len1 = ft_strlen(line);
	len2 = ft_strlen(old);
	new_line = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_line)
		return (NULL);
	while (line && line[i])
	{
		new_line[i] = line[i];
		i++;
	}
	while (old && j < len2)
		new_line[i++] = old[j++];
	new_line[i] = 0;
	if (line)
		free(line);
	return (new_line);
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
