/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:05:36 by amary             #+#    #+#             */
/*   Updated: 2026/01/09 19:04:27 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	load_texture(t_game *game)
{
	ft_init_texture(game);
	ft_load_top(game);
	ft_load_mid(game);
	ft_load_down(game);
	return (1);
}
