/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ber.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amary <amary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:03:58 by amary             #+#    #+#             */
/*   Updated: 2026/01/11 00:13:45 by amary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	is_ber(char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len < 5)
		return (0);
	printf("%s", str + len - 4);
	if (ft_strncmp(str + len - 4, ".ber", 4) == 0)
		return (1);
	return (0);
}
