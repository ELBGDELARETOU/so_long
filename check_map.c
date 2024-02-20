/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:49:49 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/20 18:07:34 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_line(char *map)
{
	int	i;
	int	new_line;

	i = 0;
	new_line = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			{
				if (map[i + 1] == '\n')
					return(0);
				new_line++;
			}
		i++;
	}
	return (new_line);
}

int	check_walls(char **map, int number_of_lines, int len_of_lines)
{
	int	i;

	i = 0;
	while (i != len_of_lines - 1)
	{
		if (map[0][i] != '1')
			return (-1);
		if (map[number_of_lines][i] != '1')
			return (-1);
		i++;
	}
	i = 1;
	while (i != number_of_lines)
	{
		if (map[i][0] != '1' || map[i][len_of_lines - 1] != '1')
			return (-1);
		i++;
	}
	return (0);
}

int	check_map(char *map, t_slg *slg)
{
	int	E_count;
	int	P_count;
	int	i;

	E_count = 0;
	P_count = 0;
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'E')
			E_count++;
		if (map[i] == 'P')
			P_count++;
		if (map[i] == 'C')
			slg->C_count += 1;
		if (map[i] != 'C' && map[i] != 'E' && map[i] != 'P' && map[i] != '0'
			&& map[i] != '1' && map[i] != '\n')
			return (-1);
		i++;
	}
	if (E_count != 1 || P_count != 1)
		return (-1);
	return (0);
}

int	check_rectangle(char *map, t_slg *slg)
{
	if (!count_line(map))
		return (-1);
	slg->number_of_lines = count_line(map);
	slg->rectangle = malloc(slg->number_of_lines + 1);
	if (!slg->rectangle)
		return (-1);
	slg->len_of_lines = ft_strlen_of_one_line(map);
	slg->rectangle = ft_split(map, '\n');
	return (check_walls(slg->rectangle, slg->number_of_lines,
			slg->len_of_lines));
}

int	ft_strlen_of_one_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}
