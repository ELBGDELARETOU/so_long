/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_base_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:56:18 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/19 20:15:50 by anaouali         ###   ########.fr       */
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
}

void	init_walls(t_slg *slg)
{
	slg->x = 0;
	slg->y = 0;
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
}

void	init_white_walls(t_slg *slg)
{
	slg->y = 0;
	slg->x = 0;
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

void	init_interior_walls(t_slg *slg)
{
	slg->x = 1;
	slg->y = 1;
	while (slg->y != slg->number_of_lines)
	{
		while (slg->x != (slg->len_of_lines - 1))
		{
			if (slg->rectangle[slg->y][slg->x] == '1')
				mlx_put_image_to_window(slg->mlx, slg->mlx_win,
					slg->img_interior_walls, (slg->x * 100), (slg->y * 100));
			slg->x += 1;
		}
		slg->x = 1;
		slg->y += 1;
	}
}

void	init_exit(t_slg *slg)
{
	slg->x = 1;
	slg->y = 1;
	while (slg->y != slg->number_of_lines)
	{
		while (slg->x != (slg->len_of_lines - 1))
		{
			if (slg->rectangle[slg->y][slg->x] == 'E')
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->stairs,
					(slg->x * 100), (slg->y * 100));
			slg->x += 1;
		}
		slg->x = 1;
		slg->y += 1;
	}
}

void	init_colectible(t_slg *slg)
{
	int	i;

	i = 0;
	slg->x = 1;
	slg->y = 1;
	while (slg->y != slg->number_of_lines)
	{
		while (slg->x != (slg->len_of_lines - 1))
		{
			if (slg->rectangle[slg->y][slg->x] == 'C')
			// while (1)
			{
				if (i == 3)
					i = 0;
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->key[i],
					(slg->x * 100), (slg->y * 100));
				// 	usleep(150000);
				// 	i++;
			}
			slg->x += 1;
		}
		slg->x = 1;
		slg->y += 1;
	}
}

void	init_hero(t_slg *slg)
{
	int	i;

	i = 0;
	slg->x = 1;
	slg->y = 1;
	while (slg->y != slg->number_of_lines)
	{
		while (slg->x != (slg->len_of_lines - 1))
		{
			if (slg->rectangle[slg->y][slg->x] == 'P')
			// while (1)
			{
				if (i == 3)
					i = 0;
				slg->player_x = slg->x;
				slg->player_y = slg->y;
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->hero[0],
					(slg->x * 100), (slg->y * 100));
				// 	usleep(150000);
				// 	i++;
			}
			slg->x += 1;
		}
		slg->x = 1;
		slg->y += 1;
	}
}
// void	init_hero(t_slg *slg)
// {
// 	int	i;

// 	i = 0;
// 	slg->x = 1;
// 	slg->y = 1;
// 	while (slg->y != slg->number_of_lines)
// 	{
// 		while (slg->x != (slg->len_of_lines - 1))
// 		{
// 			if (slg->rectangle[slg->y][slg->x] == 'P')
// 				while (1)
// 				{
// 					if (i == 4)
// 						i = 0;
// 					slg->player_x = slg->x;
// 					slg->player_y = slg->y;
// 					mlx_put_image_to_window(slg->mlx, slg->mlx_win,
// 						slg->hero[i], (slg->x * 100), (slg->y * 100));
// 					usleep(150000);
// 					i++;
// 				}
// 			slg->x += 1;
// 		}
// 		slg->x = 1;
// 		slg->y += 1;
// 	}
// }

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
int	closer(t_slg *slg)
{
	mlx_destroy_window(slg->mlx, slg->mlx_win);
	mlx_destroy_display(slg->mlx);
	exit(0);
	return (0);
}

int	colectible(t_slg *slg)
{
	if (slg->rectangle[slg->player_y][slg->player_x] == 'C'
		|| slg->rectangle[slg->player_y][slg->player_x] == 'E')
	{
		if (slg->rectangle[slg->player_y][slg->player_x] == 'C')
			slg->actual_c_counter += 1;
		if (slg->actual_c_counter >= slg->C_count)
		{
			if (slg->rectangle[slg->player_y][slg->player_x] == 'E')
			{
				closer(slg);
				return (0);
			}
		}
	}
	return (0);
}

int	key_press(int key, t_slg *slg)
{
	colectible(slg);
	if (key == XK_Escape)
		closer(slg);
	if (key == XK_w)
	{
		if (slg->rectangle[slg->player_y - 1][slg->player_x] == '1')
			return (-1);
		if (slg->rectangle[slg->player_y - 1][slg->player_x] == 'E' && slg->actual_c_counter <= slg->C_count)
			return (-1);
		if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
				((slg->player_x) * 100), ((slg->player_y) * 100));
		}
		slg->player_y -= 1;
	}
	else if (key == XK_a)
	{
		if (slg->rectangle[slg->player_y][slg->player_x - 1] == '1')
			return (-1);
		if (slg->rectangle[slg->player_y][slg->player_x - 1] == 'E' && slg->actual_c_counter <= slg->C_count)
			return (-1);
		if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
				((slg->player_x) * 100), ((slg->player_y) * 100));
		}
		slg->player_x -= 1;
	}
	else if (key == XK_d)
	{
		if (slg->rectangle[slg->player_y][slg->player_x + 1] == '1')
			return (-1);
		if (slg->rectangle[slg->player_y][slg->player_x + 1] == 'E' && slg->actual_c_counter <= slg->C_count)
			return (-1);
		if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
				((slg->player_x) * 100), ((slg->player_y) * 100));
		}
		slg->player_x += 1;
	}
	else if (key == XK_s)
	{
		if (slg->rectangle[slg->player_y + 1][slg->player_x] == '1')
			return (-1);
		if (slg->rectangle[slg->player_y + 1][slg->player_x] == 'E' && slg->actual_c_counter <= slg->C_count)
			return (-1);
		if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
				((slg->player_x) * 100), ((slg->player_y) * 100));
		}
		slg->player_y += 1;
	}
	if (key == XK_w || key == XK_a || key == XK_d || key == XK_s)
	{
		if (slg->rectangle[slg->player_y][slg->player_x] == '1')
			return (-1);
		if (slg->rectangle[slg->player_y][slg->player_x] == 'E' && slg->actual_c_counter <= slg->C_count)
			return (-1);
		if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
		{
			mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->hero[2],
				(slg->player_x * 100), (slg->player_y * 100));
		}
	}
	return (0);
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
	return (0);
}

int	main(void)
{
	t_slg slg;

	ft_memset(&slg, 0, sizeof(t_slg));
	if (check(&slg) == -1)
		return (-1);
	create_base_map(&slg);
	mlx_key_hook(slg.mlx_win, &key_press, &slg);
	mlx_hook(slg.mlx_win, 17, 0, &closer, &slg);
	init_base(&slg);
	mlx_loop(slg.mlx);
	return (0);
}