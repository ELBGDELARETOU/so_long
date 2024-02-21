/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_to_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:07:26 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 11:10:01 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	convert_img(t_slg *slg)
{
	slg->img_top = mlx_xpm_file_to_image(slg->mlx, "./img/Longwall-top.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->img_top)
		return (0);
	slg->img_corner_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-top-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_corner_left)
		return (0);
	slg->img_corner_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-top-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_corner_right)
		return (0);
	slg->img_bottom_corner_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-bottom-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_bottom_corner_right)
		return (0);
	slg->img_bottom_corner_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-bottom-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_bottom_corner_left)
		return (0);
	slg->img_bottom = mlx_xpm_file_to_image(slg->mlx, "img/Longwall-bottom.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->img_bottom)
		return (0);
	return (1);
}

int	convert_img2(t_slg *slg)
{
	slg->img_long_wall_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Longwall-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_long_wall_left)
		return (0);
	slg->img_long_wall_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Longwall-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_long_wall_right)
		return (0);
	slg->img_floor = mlx_xpm_file_to_image(slg->mlx, "img/White.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->img_floor)
		return (0);
	slg->img_white_right_corner = mlx_xpm_file_to_image(slg->mlx,
			"img/White-top-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_right_corner)
		return (0);
	slg->img_white_left_corner = mlx_xpm_file_to_image(slg->mlx,
			"img/White-top-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_left_corner)
		return (0);
	slg->img_white_bottom_left = mlx_xpm_file_to_image(slg->mlx,
			"img/White-bottom-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_bottom_left)
		return (0);
	return (1);
}

int	convert_img3(t_slg *slg)
{
	slg->img_white_bottom_right = mlx_xpm_file_to_image(slg->mlx,
			"img/White-bottom-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_bottom_right)
		return (0);
	slg->img_white_top = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-top.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_top)
		return (0);
	slg->img_white_bottom = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-bottom.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_bottom)
		return (0);
	slg->img_white_left = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-left.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_left)
		return (0);
	slg->img_white_right = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-right.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_white_right)
		return (0);
	slg->img_interior_walls = mlx_xpm_file_to_image(slg->mlx,
			"img/interior_walls.xpm", &slg->img_width, &slg->img_height);
	if (!slg->img_interior_walls)
		return (0);
	return (1);
}

int	convert_img4(t_slg *slg)
{
	slg->key[0] = mlx_xpm_file_to_image(slg->mlx, "img/Key1.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->key[0])
		return (0);
	slg->key[1] = mlx_xpm_file_to_image(slg->mlx, "img/Key2.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->key[1])
		return (0);
	slg->key[2] = mlx_xpm_file_to_image(slg->mlx, "img/Key3.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->key[2])
		return (0);
	slg->key[3] = mlx_xpm_file_to_image(slg->mlx, "img/Key4.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->key[3])
		return (0);
	slg->door1 = mlx_xpm_file_to_image(slg->mlx, "img/door1.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->door1)
		return (0);
	slg->door2 = mlx_xpm_file_to_image(slg->mlx, "img/door2.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->door2)
		return (0);
	return (1);
}

int	convert_img5(t_slg *slg)
{
	slg->hero[0] = mlx_xpm_file_to_image(slg->mlx, "img/hero1.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->hero[0])
		return (0);
	slg->hero[1] = mlx_xpm_file_to_image(slg->mlx, "img/hero2.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->hero[1])
		return (0);
	slg->hero[2] = mlx_xpm_file_to_image(slg->mlx, "img/hero3.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->hero[2])
		return (0);
	slg->hero[3] = mlx_xpm_file_to_image(slg->mlx, "img/hero4.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->hero[3])
		return (0);
	slg->stairs = mlx_xpm_file_to_image(slg->mlx, "img/stairs.xpm",
			&slg->img_width, &slg->img_height);
	if (!slg->stairs)
		return (0);
	return (1);
}
