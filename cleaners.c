/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaners.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:38:08 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 15:40:45 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_double_tab(char **tab)
{
	int	i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
}

int	closer(t_slg *slg)
{
	destroy_image(slg);
	destroy_image2(slg);
	destroy_image3(slg);
	destroy_image4(slg);
	destroy_image5(slg);
	free_double_tab(slg->rectangle);
	if (slg->mlx_win)
		mlx_destroy_window(slg->mlx, slg->mlx_win);
	if (slg->mlx)
		(mlx_destroy_display(slg->mlx), free(slg->mlx));
	exit(0);
}
