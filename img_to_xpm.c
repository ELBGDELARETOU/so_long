/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_to_xpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:07:26 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/14 12:08:15 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	convert_img(t_slg *slg)
{
	slg->img_width = 0;
	slg->img_height = 0;
	slg->img_top = mlx_xpm_file_to_image(slg->mlx, "./img/Longwall-top.xpm",
			&slg->img_width, &slg->img_height);
	slg->img_corner_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-top-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_corner_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-top-right.xpm", &slg->img_width, &slg->img_height);
	slg->img_bottom_corner_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-bottom-right.xpm", &slg->img_width, &slg->img_height);
	slg->img_bottom_corner_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Corner-bottom-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_bottom = mlx_xpm_file_to_image(slg->mlx, "img/Longwall-bottom.xpm",
			&slg->img_width, &slg->img_height);
	slg->img_long_wall_left = mlx_xpm_file_to_image(slg->mlx,
			"img/Longwall-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_long_wall_right = mlx_xpm_file_to_image(slg->mlx,
			"img/Longwall-right.xpm", &slg->img_width, &slg->img_height);
	slg->img_floor = mlx_xpm_file_to_image(slg->mlx, "img/White.xpm",
			&slg->img_width, &slg->img_height);
}

void	convert_img2(t_slg *slg)
{
	slg->img_white_right_corner = mlx_xpm_file_to_image(slg->mlx,
			"img/White-top-right.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_left_corner = mlx_xpm_file_to_image(slg->mlx,
			"img/White-top-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_bottom_left = mlx_xpm_file_to_image(slg->mlx,
			"img/White-bottom-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_bottom_right = mlx_xpm_file_to_image(slg->mlx,
			"img/White-bottom-right.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_top = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-top.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_bottom = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-bottom.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_left = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-left.xpm", &slg->img_width, &slg->img_height);
	slg->img_white_right = mlx_xpm_file_to_image(slg->mlx,
			"img/White-mid-right.xpm", &slg->img_width, &slg->img_height);
}
