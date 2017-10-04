/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:56:35 by jemalhad          #+#    #+#             */
/*   Updated: 2017/10/04 17:00:23 by jemalhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
