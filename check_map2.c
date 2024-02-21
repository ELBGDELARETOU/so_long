/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:24:41 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/21 15:10:47 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_all(char *map, t_slg *slg)
{
	if (check_map(map, slg) == -1)
	{
		free(map);
		ft_putstr_fd("Invalid map... Retry !\n", 2);
		return (0);
	}
	if (check_rectangle(map, slg) == -1)
	{
		ft_putstr_fd("Invalid map... Retry !\n", 2);
		return (0);
	}
	return (1);
}

int	check(t_slg *slg, char *argv)
{
	char	*line;
	char	*map;
	char	*tmp;
	int		fd;

	fd = 0;
	fd = open(argv, O_RDONLY);
	line = get_next_line(fd);
	tmp = "";
	map = ft_strjoin(tmp, line);
	free(line);
	if (!map)
	{
		ft_putstr_fd("Invalid map... Retry !\n", 2);
		free(map);
		return (-1);
	}
	while (line)
	{
		line = get_next_line(fd);
		tmp = map;
		if (line == NULL)
		{
			free(line);
			break ;
		}
		map = ft_strjoin(tmp, line);
		free(tmp);
		free(line);
	}
	if (!check_all(map, slg))
		return (-1);
	return (0);
}
