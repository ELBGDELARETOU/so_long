/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:11 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 20:01:32 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	destroy_image(t_slg *slg)
{
	if (slg->img_top)
		(mlx_destroy_image(slg->mlx, slg->img_top));
	if (slg->img_corner_left)
		(mlx_destroy_image(slg->mlx, slg->img_corner_left));
	if (slg->img_corner_right)
		mlx_destroy_image(slg->mlx, slg->img_corner_right);
	if (slg->img_bottom_corner_right)
		mlx_destroy_image(slg->mlx, slg->img_bottom_corner_right);
	if (slg->img_bottom_corner_left)
		mlx_destroy_image(slg->mlx, slg->img_bottom_corner_left);
	if (slg->img_bottom)
		mlx_destroy_image(slg->mlx, slg->img_bottom);
}

void	destroy_image2(t_slg *slg)
{
	if (slg->img_long_wall_right)
		mlx_destroy_image(slg->mlx, slg->img_long_wall_right);
	if (slg->img_floor)
		mlx_destroy_image(slg->mlx, slg->img_floor);
	if (slg->img_white_right_corner)
		mlx_destroy_image(slg->mlx, slg->img_white_right_corner);
	if (slg->img_white_left_corner)
		mlx_destroy_image(slg->mlx, slg->img_white_left_corner);
	if (slg->img_white_bottom_left)
		mlx_destroy_image(slg->mlx, slg->img_white_bottom_left);
}
void	destroy_image3(t_slg *slg)
{
	if (slg->img_white_bottom_right)
		mlx_destroy_image(slg->mlx, slg->img_white_bottom_right);
	if (slg->img_white_top)
		mlx_destroy_image(slg->mlx, slg->img_white_top);
	if (slg->img_white_bottom)
		mlx_destroy_image(slg->mlx, slg->img_white_bottom);
	if (slg->img_white_right)
		mlx_destroy_image(slg->mlx, slg->img_white_right);
	if (slg->img_interior_walls)
		mlx_destroy_image(slg->mlx, slg->img_interior_walls);
}
void	destroy_image4(t_slg *slg)
{
	if (slg->key[0])
		mlx_destroy_image(slg->mlx, slg->key[0]);
	if (slg->key[1])
		mlx_destroy_image(slg->mlx, slg->key[1]);
	if (slg->key[2])
		mlx_destroy_image(slg->mlx, slg->key[2]);
	if (slg->key[3])
		mlx_destroy_image(slg->mlx, slg->key[3]);
	if (slg->door1)
		mlx_destroy_image(slg->mlx, slg->door1);
	if (slg->door2)
		mlx_destroy_image(slg->mlx, slg->door2);
}
void	destroy_image5(t_slg *slg)
{
	if (slg->hero[0])
		mlx_destroy_image(slg->mlx, slg->hero[0]);
	if (slg->hero[1])
		mlx_destroy_image(slg->mlx, slg->hero[1]);
	if (slg->hero[2])
		mlx_destroy_image(slg->mlx, slg->hero[2]);
	if (slg->hero[3])
		mlx_destroy_image(slg->mlx, slg->hero[3]);
	if (slg->stairs)
		mlx_destroy_image(slg->mlx, slg->stairs);
}