/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:56:35 by jemalhad          #+#    #+#             */
/*   Updated: 2017/10/04 17:00:46 by jemalhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strlen(read_file(argv[1])) < 545)
		{
			ft_fillit(read_file(argv[1]));
		}
		else
			ft_putstr("error\n");
		return (0);
	}
	else
		write(2, "Usage : Fillit don't have a good number of input.\n", 50);
}
