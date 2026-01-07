/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   have_all_collect.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:30:01 by amary             #+#    #+#             */
/*   Updated: 2026/01/07 17:15:30 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_verif_collect(char *str, int	width, int *P, int *C, int *E)
{
	int	i;

	i = 0;
	while (i <= width - 1)
	{
		if (str[i] == 'P')
			(*P)++;
		else if (str[i] == 'C')
			(*C)++;
		else if (str[i] == 'E')
			(*E)++;
		i++;
	}
	return ;
}

int	have_all_collect(t_map map)
{
	int	P;
	int	C;
	int	E;
	int	j;

	P = 0;
	C = 0;
	E = 0;
	j = 0;
	while (map.grid[j])
		ft_verif_collect(map.grid[j++], map.width, &P, &C, &E);
	if (P == 1 && C >= 1 && E >= 1)
		return (1);
	return (0);
}
