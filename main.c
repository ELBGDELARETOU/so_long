/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:15:03 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/16 17:31:56 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_slg slg;

	ft_memset(&slg, 0, sizeof(t_slg));
	if (check(&slg) == -1)
		return (-1);
	// printf("%d", slg.number_of_lines);
	// printf("%d", slg.len_of_lines);
	if (create_base_map(&slg) == -1)
		return (-1);
}