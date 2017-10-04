/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemalhad <jemalhad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 16:56:35 by jemalhad          #+#    #+#             */
/*   Updated: 2017/10/04 17:00:58 by jemalhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_lenght(const char *s)
{
	int i;

	i = 0;
	if (ft_strlen(s) == 0)
		return (FALSE);
	while (*s != '\0')
	{
		if (*s == '\n')
			s++;
		while (*s != '\n' && *s != '\0')
		{
			s++;
			i++;
		}
		if (i != 4)
			return (FALSE);
		i = 0;
		s++;
	}
	return (TRUE);
}

static int		check_map(const char *s)
{
	int		c;
	int		b;

	c = 0;
	b = 0;
	while (*s)
	{
		if (*s == '#')
			c++;
		if (*s == '.')
			b++;
		s++;
	}
	if (b / 3 == c)
		return (TRUE);
	else
		return (FALSE);
}

size_t			ft_count_d(const char *s)
{
	size_t	i;
	int		c;

	i = 0;
	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] == '#')
			i++;
		c++;
	}
	return (i);
}

int				check_tetriminos(const char *s)
{
	int		i;
	int		a;
	size_t	grille_valide;
	size_t	multiple_d;

	multiple_d = 0;
	grille_valide = 0;
	i = 0;
	a = 0;
	if (check_lenght(s) == TRUE)
		i++;
	if (check_height(s, a) == TRUE)
		i++;
	if (check_carac(s) == TRUE)
		i++;
	if (check_map(s) == TRUE)
		i++;
	if (check_return(s) == TRUE)
		i++;
	if (cc2(s, a, grille_valide, multiple_d) == TRUE)
		i++;
	return (i == 6 ? TRUE : FALSE);
}
