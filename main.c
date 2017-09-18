/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccatoire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 12:24:32 by ccatoire          #+#    #+#             */
/*   Updated: 2017/09/15 12:24:32 by ccatoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char *argv[])
{
	int			i;
	t_tlist		*elem;
	char		*str;

	if (argc != 2)
		return (0);
	str = ft_buffer(argv[1]);		//pas protger
	i = 0;
	if ((elem = ft_reader(str)))
	{
		ft_placetet(elem);
		return (1);
	}
	return (0);
}
