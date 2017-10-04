/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:56:35 by jemalhad          #+#    #+#             */
/*   Updated: 2017/10/04 17:00:55 by jemalhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*read_file(const char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*file_read;

	fd = open(argv, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if ((file_read = (char *)malloc(sizeof(char) * ret)) == NULL)
		return (NULL);
	close(fd);
	file_read = buf;
	return (file_read);
}
