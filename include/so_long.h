/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:27:29 by amary             #+#    #+#             */
/*   Updated: 2026/01/06 22:09:52 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG
# define SO_LONG

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../../../1er_cercle/get_next_line/get_next_line.h"

typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

t_map	read_map(char *str);
char	*get_next_line(int fd);
void	initialize_map(char *str, t_map *map);
int		ft_strlen(char *str);

#endif