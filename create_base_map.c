/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_base_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:56:18 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 15:42:42 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	init_base(t_slg *slg)
{
	init_background(slg);
	init_walls(slg);
	init_white_walls(slg);
	init_corner(slg);
	init_white_corners(slg);
	init_interior_walls(slg);
	init_exit(slg);
	init_colectible(slg);
	init_hero(slg);
	return (0);
}

int	colectible(t_slg *slg)
{
	if (slg->actual_c_counter == slg->C_count)
	{
		if (slg->rectangle[slg->player_y][slg->player_x] == 'E')
		{
			closer(slg);
			return (0);
		}
	}
	if (slg->rectangle[slg->player_y][slg->player_x] == 'C'
		|| slg->rectangle[slg->player_y][slg->player_x] == 'E')
	{
		if (slg->rectangle[slg->player_y][slg->player_x] == 'C')
		{
			slg->actual_c_counter += 1;
			slg->rectangle[slg->player_y][slg->player_x] = '0';
		}
	}
	return (0);
}

int	convert_all_images(t_slg *slg)
{
	init_img(slg);
	if (!convert_img(slg))
		return (0);
	if (!convert_img2(slg))
		return (0);
	if (!convert_img3(slg))
		return (0);
	if (!convert_img4(slg))
		return (0);
	if (!convert_img5(slg))
		return (0);
	return (1);
}

int	create_base_map(t_slg *slg)
{
	slg->total_len = (slg->len_of_lines * 100);
	slg->total_height = ((slg->number_of_lines + 1) * 100);
	slg->mlx = mlx_init();
	if (!slg->mlx)
		return (-1);
	slg->mlx_win = mlx_new_window(slg->mlx, slg->total_len, slg->total_height,
			"So long");
	if (!convert_all_images(slg))
		closer(slg);
	init_base(slg);
	return (0);
}
