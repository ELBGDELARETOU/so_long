/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_base_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:56:18 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 20:05:08 by anaouali         ###   ########.fr       */
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

void	free_double_tab(void **tab)
{
	int	i;

	i = 0;
	while (tab[i++])
		free(tab[i]);
}

int	closer(t_slg *slg)
{
	destroy_image(slg);
	destroy_image2(slg);
	destroy_image3(slg);
	destroy_image4(slg);
	destroy_image5(slg);
	if (slg->mlx_win)
		mlx_destroy_window(slg->mlx, slg->mlx_win);
	if (slg->mlx)
		(mlx_destroy_display(slg->mlx), free(slg->mlx));
	exit(0);
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

int	key_press(int key, t_slg *slg)
{
	colectible(slg);
	if (key == XK_Escape)
		closer(slg);
	else if (key == XK_w && (!handle_w(slg)))
		return (-1);
	else if (key == XK_a && (!handle_a(slg)))
		return (-1);
	else if (key == XK_d && (!handle_d(slg)))
		return (-1);
	else if (key == XK_s && (!handle_s(slg)))
		return (-1);
	if (key == XK_w || key == XK_a || key == XK_d || key == XK_s)
	{
		key_pressed(slg);
		return (0);
	}
	return (-1);
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
