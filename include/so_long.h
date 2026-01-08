/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:27:29 by amary             #+#    #+#             */
/*   Updated: 2026/01/08 18:42:59 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG
# define SO_LONG

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../../../1er_cercle/get_next_line/get_next_line.h"
# include "minilibx-linux/mlx.h"
# include "minilibx-linux/mlx_int.h"

typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

t_map	read_map(char *str);
char	*get_next_line(int fd);
void	initialize_map(char *str, t_map *map);
int		ft_parsing(t_map map);
int		is_rectangle(t_map map);
int		is_correct_wall(t_map map);
int		for_first_and_last(char *str, int width);
int		is_correct_char(t_map map);
int		is_correct(char *str, int width);
int		have_all_collect(t_map map);
void	ft_verif_collect(char *str, int	width, int *P, int *C, int *E);
int		is_winable(t_map map);
char	**cpy_grid(t_map map);
void	ft_find_player(char **grid, int heigth, int *px, int *py);
int		check_winable(char **grid, int heigth);
void	free_grid(char **grid, int heigth);
void	flood_fill(char **grid, int y, int x);

#endif