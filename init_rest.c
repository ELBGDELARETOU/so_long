/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:18:15 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 14:59:40 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
			{
				if (i == 3)
					i = 0;
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->key[i],
					(slg->x * 100), (slg->y * 100));
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
			{
				slg->player_x = slg->x;
				slg->player_y = slg->y;
				mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->hero[i],
					(slg->x * 100), (slg->y * 100));
				usleep(150000);
			}
			slg->x += 1;
		}
		slg->x = 1;
		slg->y += 1;
	}
}
