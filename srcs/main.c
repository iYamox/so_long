/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:28:37 by amary             #+#    #+#             */
/*   Updated: 2026/01/07 18:28:42 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		return (write(2, "Error to many arguments\n", 25), 1);
	map = read_map(argv[1]);
	if (!ft_parsing(map))
		return (write(2, "Parsing error\n", 15), 1);
	
	return (0);
}
