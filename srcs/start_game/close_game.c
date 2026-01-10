/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 22:06:47 by amary             #+#    #+#             */
/*   Updated: 2026/01/11 00:19:59 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	close_game(t_game *game)
{
	free_map(game->map);
	mlx_destroy_window(game->mlx, game->window);
	exit(0);
	return (0);
}
