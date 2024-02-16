/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:49:49 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/16 17:32:51 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// cas error == -1
// ok = 0

int	count_line(char *map)
{
	int	i;
	int	new_line;

	i = 0;
	new_line = 0;
	while (map[i])
	{
		if (map[i++] == '\n')
			new_line++;
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

int	check_map(char *map)
{
	int	C_count;
	int	E_count;
	int	P_count;
	int	i;

	C_count = 0;
	E_count = 0;
	P_count = 0;
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'C')
			C_count++;
		if (map[i] == 'E')
			E_count++;
		if (map[i] == 'P')
			P_count++;
		if (map[i] != 'C' && map[i] != 'E' && map[i] != 'P' && map[i] != '0'
			&& map[i] != '1' && map[i] != '\n')
			return (-1);
		i++;
	}
	if (C_count != 1 || E_count != 1 || P_count != 1)
		return (-1);
	return (0);
}

int	ft_strlen_of_one_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int	check_rectangle(char *map, t_slg *slg)
{
	slg->number_of_lines = count_line(map);
	slg->rectangle = malloc(slg->number_of_lines + 1);
	if (!slg->rectangle)
		return (-1);
	slg->len_of_lines = ft_strlen_of_one_line(map);
	slg->rectangle = ft_split(map, '\n');
	return (check_walls(slg->rectangle, slg->number_of_lines,
			slg->len_of_lines));
}

int	check_all(char *map, t_slg *slg)
{
	if (check_map(map) == -1)
	{
		ft_putstr_fd("invalid map\n", 1);
		return (-1);
	}
	if (check_rectangle(map, slg) == -1)
	{
		ft_putstr_fd("invalid map\n", 1);
		return (-1);
	}
	else
		ft_putstr_fd("good map", 1);
	return (0);
}

int	check(t_slg *slg)
{
	char	*line;
	char	*map;
	int		fd;

	map = "";
	fd = open("./map0.ber", O_RDONLY);
	line = get_next_line(fd);
	map = ft_strjoin(map, line);
	while (line)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		map = ft_strjoin(map, line);
	}
	if (check_all(map, slg) == -1)
		return (-1);
	return (0);
}
