/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_base_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:56:18 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/16 18:51:34 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_background(t_slg slg)
{
	slg.x = 0;
	slg.y = 0;
	while (slg.y != slg.total_height)
	{
		while (slg.x != slg.total_len)
		{
			mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_floor, slg.x,
				slg.y);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
}

void	init_walls(t_slg slg)
{
	slg.x = 0;
	slg.y = 0;
	while (slg.y != slg.total_height)
	{
		while (slg.x != slg.total_len)
		{
			if (slg.y == 0 && slg.x > 0 && slg.x < (slg.total_len - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_top,
					slg.x, slg.y);
			if (slg.x == 0 && slg.x < slg.total_len && slg.y > 0
				&& slg.y < (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_long_wall_left, slg.x, slg.y);
			if (slg.x == (slg.total_len - 100) && slg.y > 0
				&& slg.y < (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_long_wall_right, slg.x, slg.y);
			if (slg.x > 0 && slg.x < (slg.total_len - 100)
				&& slg.y == (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_bottom,
					slg.x, slg.y);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
}

void	init_white_walls(t_slg slg)
{
	slg.y = 0;
	slg.x = 0;
	while (slg.y != slg.total_height)
	{
		while (slg.x != slg.total_len)
		{
			if (slg.y == 0 && slg.x > 0 && slg.x < (slg.total_len - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_top,
					slg.x, slg.y + 100);
			if (slg.x == 0 && slg.x < slg.total_len && slg.y > 0
				&& slg.y < (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_left, slg.x + 100, slg.y);
			if (slg.x == (slg.total_len - 100) && slg.y > 100
				&& slg.y < (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_right, slg.x - 100, slg.y);
			if (slg.x > 0 && slg.x < (slg.total_len - 100)
				&& slg.y == (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_bottom, slg.x, slg.y - 100);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
}

void	init_corner(t_slg slg)
{
	slg.y = 0;
	slg.x = 0;
	while (slg.y != slg.total_height)
	{
		while (slg.x != slg.total_len)
		{
			if (slg.x == 0 && slg.y == (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_bottom_corner_left, slg.x, slg.y);
			if (slg.x == (slg.total_len - 100) && slg.y == (slg.total_height
					- 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_bottom_corner_right, slg.x, slg.y);
			if (slg.x == 0 && slg.y == 0)
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_corner_left, slg.x, slg.y);
			if (slg.x == (slg.total_len - 100) && slg.y == 0)
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_corner_right, slg.x, slg.y);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
}

void	init_white_corners(t_slg slg)
{
	slg.y = 0;
	slg.x = 0;
	while (slg.y != slg.total_height)
	{
		while (slg.x != slg.total_len)
		{
			if (slg.x == 0 && slg.y == (slg.total_height - 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_bottom_left, slg.x + 100, slg.y - 100);
			if (slg.x == (slg.total_len - 100) && slg.y == (slg.total_height
					- 100))
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_bottom_right, slg.x - 100, slg.y - 100);
			if (slg.x == 0 && slg.y == 0)
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_left_corner, slg.x + 100, slg.y + 100);
			if (slg.x == (slg.total_len - 100) && slg.y == 0)
				mlx_put_image_to_window(slg.mlx, slg.mlx_win,
					slg.img_white_right_corner, slg.x - 100, slg.y + 100);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
}

void	init_base(t_slg slg)
{
	init_background(slg);
	init_walls(slg);
	init_white_walls(slg);
	init_corner(slg);
	init_white_corners(slg);
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
	convert_img(slg);
	convert_img2(slg);
	init_base(*slg);
	mlx_loop(slg->mlx);
	return (0);
}
