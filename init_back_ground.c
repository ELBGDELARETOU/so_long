/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_back_ground.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:17:38 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 12:23:25 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_background(t_slg *slg)
{
	slg->x = 0;
	slg->y = 0;
	while (slg->y != slg->total_height)
	{
		while (slg->x != slg->total_len)
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
				slg->x, slg->y);
			slg->x += 100;
		}
		slg->x = 0;
		slg->y += 100;
	}
    slg->x = 0;
	slg->y = 0;
}

void	init_walls(t_slg *slg)
{
	while (slg->y != slg->total_height)
	{
		while (slg->x != slg->total_len)
		{
			if (slg->y == 0 && slg->x > 0 && slg->x < (slg->total_len - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_top,
					slg->x, slg->y);
			if (slg->x == 0 && slg->x < slg->total_len && slg->y > 0
				&& slg->y < (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_long_wall_left, slg->x, slg->y);
			if (slg->x == (slg->total_len - 100) && slg->y > 0
				&& slg->y < (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_long_wall_right, slg->x, slg->y);
			if (slg->x > 0 && slg->x < (slg->total_len - 100)
				&& slg->y == (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_bottom,
					slg->x, slg->y);
			slg->x += 100;
		}
		slg->x = 0;
		slg->y += 100;
	}
    slg->x = 0;
}

void	init_white_walls(t_slg *slg)
{
	slg->y = 0;
	while (slg->y != slg->total_height)
	{
		while (slg->x != slg->total_len)
		{
			if (slg->y == 0 && slg->x > 0 && slg->x < (slg->total_len - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_top, slg->x, slg->y + 100);
			if (slg->x == 0 && slg->x < slg->total_len && slg->y > 0
				&& slg->y < (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_left, slg->x + 100, slg->y);
			if (slg->x == (slg->total_len - 100) && slg->y > 100
				&& slg->y < (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_right, slg->x - 100, slg->y);
			if (slg->x > 0 && slg->x < (slg->total_len - 100)
				&& slg->y == (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_bottom, slg->x, slg->y - 100);
			slg->x += 100;
		}
		slg->x = 0;
		slg->y += 100;
	}
}

void	init_corner(t_slg *slg)
{
	slg->y = 0;
	slg->x = 0;
	while (slg->y != slg->total_height)
	{
		while (slg->x != slg->total_len)
		{
			if (slg->x == 0 && slg->y == (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_bottom_corner_left, slg->x, slg->y);
			if (slg->x == (slg->total_len - 100) && slg->y == (slg->total_height
					- 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_bottom_corner_right, slg->x, slg->y);
			if (slg->x == 0 && slg->y == 0)
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_corner_left, slg->x, slg->y);
			if (slg->x == (slg->total_len - 100) && slg->y == 0)
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_corner_right, slg->x, slg->y);
			slg->x += 100;
		}
		slg->x = 0;
		slg->y += 100;
	}
}

void	init_white_corners(t_slg *slg)
{
	slg->y = 0;
	slg->x = 0;
	while (slg->y != slg->total_height)
	{
		while (slg->x != slg->total_len)
		{
			if (slg->x == 0 && slg->y == (slg->total_height - 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_bottom_left, slg->x + 100, slg->y - 100);
			if (slg->x == (slg->total_len - 100) && slg->y == (slg->total_height
					- 100))
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_bottom_right, slg->x - 100, slg->y - 100);
			if (slg->x == 0 && slg->y == 0)
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_left_corner, slg->x + 100, slg->y + 100);
			if (slg->x == (slg->total_len - 100) && slg->y == 0)
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_white_right_corner, slg->x - 100, slg->y + 100);
			slg->x += 100;
		}
		slg->x = 0;
		slg->y += 100;
	}
}
