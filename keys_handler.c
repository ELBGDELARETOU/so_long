/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:42:01 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 15:42:33 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int key, t_slg *slg)
{
	colectible(slg);
	if (key == XK_Escape)
		closer(slg);
	else if (key == XK_w && (!handle_w(slg)))
		return (-1);
	else if (key == XK_a && (!handle_a(slg)))
		return (-1);
	else if (key == XK_d && (!handle_d(slg)))
		return (-1);
	else if (key == XK_s && (!handle_s(slg)))
		return (-1);
	if (key == XK_w || key == XK_a || key == XK_d || key == XK_s)
	{
		key_pressed(slg);
		return (0);
	}
	return (-1);
}
