/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:27:29 by amary             #+#    #+#             */
/*   Updated: 2026/01/09 19:55:52 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../../../1er_cercle/get_next_line/get_next_line.h"
# include "../minilibx-linux/mlx.h"

typedef struct s_map
{
	char	**grid;
	int		height;
	int		width;
}			t_map;

typedef struct s_img
{
	void	*top_wall;
	void	*top_left_wall;
	void	*top_rigth_wall;
	void	*rigth_wall;
	void	*left_wall;
	void	*down_wall;
	void	*left_down_wall;
	void	*rigth_down_wall;
	void	*floor;
	void	*player;
	void	*exit;
	void	*food;
	void	*tree;
}			t_img;

typedef struct s_map_size
{
	int	h;
	int	w;
}			t_map_size;

typedef struct s_game
{
	void		*mlx;
	void		*window;
	t_map		map;
	t_map_size	map_size;
	t_img		img;
}				t_game;

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
void	ft_verif_collect(char *str, int width, int *P, int *C);
void	ft_verif_E(char *str, int width, int *E);
int		is_winable(t_map map);
char	**cpy_grid(t_map map);
void	ft_find_player(char **grid, int heigth, int *px, int *py);
int		check_winable(char **grid, int heigth);
void	free_grid(char **grid, int heigth);
void	flood_fill(char **grid, int y, int x);
void	free_map(t_map map);
int		start_game(t_map map);
void	ft_init_texture(t_game *game);
void ft_init_texture_v2(t_game *game);
int		load_texture(t_game *game);
void	ft_load_top(t_game *game);
void	ft_load_mid(t_game *game);
void	put_img(t_game *game, int h, int w);
void	ft_load_down(t_game *game);

#endif