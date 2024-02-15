/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:06:54 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/15 18:25:38 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_slg slg;
	
	slg.x = 0;
	slg.y = 0;
	slg.mlx = mlx_init();
	if (!slg.mlx)
		return (1);
	slg.mlx_win = mlx_new_window(slg.mlx, 1900, 1000, "So long");
	convert_img(&slg);
	convert_img2(&slg);
	while (slg.y != slg.number_of_lines)
	{
		while (slg.x != 1900)
		{
			mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_floor, slg.x, slg.y);
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
	slg.y = 0;
	slg.x = 0;
	while (slg.y != 1000)
	{
		while (slg.x != 1900)
		{
			if (slg.y == 0 && slg.x > 0 && slg.x < 1800)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_top, slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_top, slg.x, slg.y
					+ 100);
			}
			if (slg.x == 0 && slg.x < 1900 && slg.y > 0 && slg.y < 900)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_long_wall_left, slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_left, slg.x + 100,
					slg.y);
			}
			if (slg.x == 1800 && slg.y > 0 && slg.y < 900)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_long_wall_right, slg.x,
					slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_right, slg.x - 100,
					slg.y);
			}
			if (slg.x > 0 && slg.x < 1800 && slg.y == 900)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_bottom, slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_bottom, slg.x, slg.y
					- 100);
			}
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
	slg.x = 0;
	slg.y = 0;
	while (slg.y != 1000)
	{
		while (slg.x != 1900)
		{
			if (slg.x == 0 && slg.y == 900)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_bottom_corner_left, slg.x,
					slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_bottom_left, slg.x
					+ 100, slg.y - 100);
			}
			if (slg.x == 1800 && slg.y == 900)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_bottom_corner_right,
					slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_bottom_right, slg.x
					- 100, slg.y - 100);
			}
			if (slg.x == 0 && slg.y == 0)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_corner_left, slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_left_corner, slg.x
					+ 100, slg.y + 100);
			}
			if (slg.x == 1800 && slg.y == 0)
			{
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_corner_right, slg.x, slg.y);
				mlx_put_image_to_window(slg.mlx, slg.mlx_win, slg.img_white_right_corner, slg.x
					- 100, slg.y + 100);
			}
			slg.x += 100;
		}
		slg.x = 0;
		slg.y += 100;
	}
	mlx_loop(slg.mlx);
}
