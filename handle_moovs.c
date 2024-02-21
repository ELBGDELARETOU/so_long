/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_moovs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:34:41 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 15:41:25 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_w(t_slg *slg)
{
	if (slg->actual_c_counter == slg->C_count)
	{
		if (slg->rectangle[slg->player_y - 1][slg->player_x] == 'E')
		{
			closer(slg);
			return (0);
		}
	}
	if (slg->rectangle[slg->player_y - 1][slg->player_x] == '1')
		return (0);
	if (slg->rectangle[slg->player_y - 1][slg->player_x] == 'E'
		&& slg->actual_c_counter <= slg->C_count)
		return (0);
	if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
	{
		mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
			((slg->player_x) * 100), ((slg->player_y) * 100));
	}
	slg->player_y -= 1;
	return (-1);
}

int	handle_a(t_slg *slg)
{
	if (slg->actual_c_counter == slg->C_count)
	{
		if (slg->rectangle[slg->player_y][slg->player_x - 1] == 'E')
		{
			closer(slg);
			return (0);
		}
	}
	if (slg->rectangle[slg->player_y][slg->player_x - 1] == '1')
		return (0);
	if (slg->rectangle[slg->player_y][slg->player_x - 1] == 'E'
		&& slg->actual_c_counter <= slg->C_count)
		return (0);
	if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
	{
		mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
			((slg->player_x) * 100), ((slg->player_y) * 100));
	}
	slg->player_x -= 1;
	return (-1);
}

int	handle_d(t_slg *slg)
{
	if (slg->actual_c_counter == slg->C_count)
	{
		if (slg->rectangle[slg->player_y][slg->player_x + 1] == 'E')
		{
			closer(slg);
			return (0);
		}
	}
	if (slg->rectangle[slg->player_y][slg->player_x + 1] == '1')
		return (0);
	if (slg->rectangle[slg->player_y][slg->player_x + 1] == 'E'
		&& slg->actual_c_counter <= slg->C_count)
		return (0);
	if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
	{
		mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
			((slg->player_x) * 100), ((slg->player_y) * 100));
	}
	slg->player_x += 1;
	return (-1);
}

int	handle_s(t_slg *slg)
{
	if (slg->actual_c_counter == slg->C_count)
	{
		if (slg->rectangle[slg->player_y + 1][slg->player_x] == 'E')
		{
			closer(slg);
			return (0);
		}
	}
	if (slg->rectangle[slg->player_y + 1][slg->player_x] == '1')
		return (0);
	if (slg->rectangle[slg->player_y + 1][slg->player_x] == 'E'
		&& slg->actual_c_counter <= slg->C_count)
		return (0);
	if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
	{
		mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->img_floor,
			((slg->player_x) * 100), ((slg->player_y) * 100));
	}
	slg->player_y += 1;
	return (-1);
}

int	key_pressed(t_slg *slg)
{
	if (slg->rectangle[slg->player_y][slg->player_x] == '1')
		return (0);
	if (slg->rectangle[slg->player_y][slg->player_x] == 'E'
		&& slg->actual_c_counter <= slg->C_count)
		return (0);
	if (!(slg->rectangle[slg->player_y][slg->player_x] == 'E'))
	{
		mlx_put_image_to_window(slg->mlx, slg->mlx_win, slg->hero[2],
			(slg->player_x * 100), (slg->player_y * 100));
	}
	return (-1);
}
