/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:15:03 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/16 18:54:36 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_slg slg;

	ft_memset(&slg, 0, sizeof(t_slg));
	if (check(&slg) == -1)
		return (-1);
	if (create_base_map(&slg) == -1)
		return (-1);
}