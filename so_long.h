/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:05:26 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/19 18:59:51 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include "mlx/mlx_int.h"
# include <X11/X.h>
# include <X11/keysym.h>


typedef struct slg
{
	int 	C_count;
	int		actual_c_counter;
	int		player_x;
	int		player_y;
	void	*mlx;

	char	**rectangle;
	int		number_of_lines;
	int		len_of_lines;

	void	*img_floor;
	void	*img_top;
	void	*img_corner_left;
	void	*img_corner_right;
	void	*img_bottom_corner_right;
	void	*img_bottom_corner_left;
	void	*img_bottom;
	void	*img_long_wall_right;
	void	*img_long_wall_left;

	void	*img_white_right_corner;
	void	*img_white_left_corner;
	void	*img_white_bottom_left;
	void	*img_white_bottom_right;
	void	*img_white_top;
	void	*img_white_bottom;
	void	*img_white_left;
	void	*img_white_right;

	void	*key[4];

	void	*key_outline_1;
	void	*key_outline_2;
	void	*key_outline_3;
	void	*key_outline_4;

	void	*door1;
	void	*door2;

	void	*hero[4];

	void	*stairs;

	void	*img_interior_walls;

	char	*path;
	int		img_width;
	int		img_height;
	void	*mlx_win;
	int		x;
	int		y;
	int		total_len;
	int		total_height;
}			t_slg;

// fontion de convertion d image
void		convert_img(t_slg *slg);
void		convert_img2(t_slg *slg);

// fonction de verification de map
int			count_line(char *map);
int			check_walls(char **map, int number_of_lines, int len_of_lines);
int			check_map(char *map, t_slg *slg);
int			ft_strlen_of_one_line(char *str);
int			check_rectangle(char *map, t_slg *slg);
int			check_all(char *map, t_slg *slg);
int			check(t_slg *slg);

// fonciton d'initialisation de la map de base
int			create_base_map(t_slg *slg);
int			init_base(t_slg *slg);
void		init_background(t_slg *slg);
void		init_walls(t_slg *slg);
void		init_white_walls(t_slg *slg);
void		init_corner(t_slg *slg);
void		init_white_corners(t_slg *slg);

#endif