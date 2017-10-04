/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 17:00:07 by jemalhad          #+#    #+#             */
/*   Updated: 2017/10/04 17:00:33 by jemalhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int i;
	int a;

	a = 1;
	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		a = i * i;
		if (a == nb)
			return (i);
		i++;
	}
	return (ft_sqrt(nb + 1));
}
