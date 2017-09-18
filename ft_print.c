/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatoire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:18:57 by ccatoire          #+#    #+#             */
/*   Updated: 2017/09/18 18:27:36 by tlernoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_use(int i)
{
	if (i == USE)
		ft_putendl("usage : ./fillit file");
	if (i == ERR)
		ft_putendl("error");
}

void	print_map(char dbug[][TABSIZE], t_pos *p)
{
	int i;
	int j;

	i = 0;
	while (i < p->s)
	{
		j = 0;
		while (j < p->s)
		{
			ft_putchar(dbug[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	clafaim(char str[][TABSIZE], t_pos *p, t_tlist *elem)
{
	t_tlist *next;

	while (elem)
	{
		next = elem->next;
		free(elem->tetri);
		elem->tetri = NULL;
		free(elem);
		elem = NULL;
		elem = next;
	}
	free(p);
	print_map(str, p);
	exit(0);
}
