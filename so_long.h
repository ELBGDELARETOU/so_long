/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:05:26 by anaouali          #+#    #+#             */
/*   Updated: 2024/02/15 18:21:02 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include "mlx/mlx_int.h"
# include "libft/libft.h"

typedef struct slg
{
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

	
	char	*path;
	int		img_width;
	int		img_height;
	void	*mlx_win;
	int		x;
	int		y;
}			t_slg;


void	convert_img(t_slg *slg);
void	convert_img2(t_slg *slg);

#endif