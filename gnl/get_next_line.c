/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel <daniel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:11:19 by daniel            #+#    #+#             */
/*   Updated: 2024/01/30 13:09:26 by daniel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*ret;
	int			flag;

	ret = NULL;
	flag = 0;
	if (fd < 0 || fd > FOPEN_MAX || !BUFFER_SIZE)
		return (NULL);
	if (read(fd, 0, 0) < 0)
		return (ft_null_return(buff));
	while (buff[0] || read(fd, buff, BUFFER_SIZE) > 0)
	{
		ret = ft_cpy(ret, buff);
		ft_manage_buffer(buff, &flag);
		if (flag)
			break ;
	}
	return (ret);
}
