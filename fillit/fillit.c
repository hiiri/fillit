/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberglun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:17:37 by mberglun          #+#    #+#             */
/*   Updated: 2019/12/13 19:31:42 by mberglun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Usage: fillit file_name\n");
		return (0);
	}
	if (manager(argv[1]) == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
/*
	block_to_map(map, pieces[1]);
	int i = 0;
	while (map[i])
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
*/
	return (0);
}
