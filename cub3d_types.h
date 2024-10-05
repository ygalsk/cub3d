/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:53:50 by dkremer           #+#    #+#             */
/*   Updated: 2024/10/02 18:58:25 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_TYPES_H
# define CUB3D_TYPES_H

# define SCREEN_WIDTH 1000
# define SCREEN_HEIGHT 800
# define TILE_SIZE 64
# define FOV 60
# define SPEED 4
# define ROT_SPEED 0.05
# define M_PI 3.14159265358979323846
# define ROTATION_SPEED 0.045
# define PLAYER_SPEED 4

typedef struct s_wall
{
	int				t_pix;
	int				b_pix;
	double			texture_x;
	mlx_texture_t	*texture;
}	t_wall;

typedef struct s_player
{
	int		p_x;
	int		p_y;
	double	angle;
	float	fov;
	int		rot;
	int		l_r;
	int		u_d;
}	t_player;

typedef struct s_ray
{
	double	angle;
	double	distance;
	int		wall_hit;
}	t_ray;

typedef struct s_data
{
	char			**map;
	char			*map_temp;
	char			*no_texture;
	char			*so_texture;
	char			*we_texture;
	char			*ea_texture;
	int				floor_color[3];
	int				ceiling_color[3];
	unsigned int	width;
	unsigned int	height;
	int				pos_x;
	int				pos_y;
}	t_data;

typedef struct s_cub
{
	mlx_t		*mlx;
	mlx_image_t	*img;
	t_player	*player;
	t_ray		*ray;
	t_data		*data;
	t_wall		*wall;
}	t_cub;

#endif
