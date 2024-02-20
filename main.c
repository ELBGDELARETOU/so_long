/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:15:03 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 19:48:38 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_img(t_slg *slg)
{
	slg->img_floor = NULL;
	slg->img_top = NULL;
	slg->img_corner_left = NULL;
	slg->img_corner_right = NULL;
	slg->img_bottom_corner_right = NULL;
	slg->img_bottom_corner_left = NULL;
	slg->img_bottom= NULL;
	slg->img_long_wall_left = NULL;
	slg->img_long_wall_left = NULL;
	slg->img_white_right_corner = NULL;
	slg->img_white_left_corner = NULL;
	slg->img_white_bottom_left = NULL;
	slg->img_white_bottom_right = NULL;
	slg->img_white_top = NULL;
	slg->img_white_bottom = NULL;
	slg->img_white_left = NULL;
	slg->img_white_right = NULL;
	slg->door1 = NULL;
	slg->door2 = NULL;
	slg->stairs = NULL;
	slg->hero[0] = NULL;
	slg->hero[1] = NULL;
	slg->hero[2] = NULL;
	slg->hero[3] = NULL;
}

int	main(int argc, char **argv)
{
	t_slg slg;

	if (argc == 2)
	{
		ft_memset(&slg, 0, sizeof(t_slg));
		if (check(&slg, argv[1]) == -1)
			return (-1);
		create_base_map(&slg);
		mlx_key_hook(slg.mlx_win, &key_press, &slg);
		mlx_hook(slg.mlx_win, 17, 0, &closer, &slg);
		mlx_loop(slg.mlx);
	}
	else
		ft_putstr_fd("ERROR SYNTAX\nExemple : ./so_long path/of/map.ber\n", 1);
	return (0);
}