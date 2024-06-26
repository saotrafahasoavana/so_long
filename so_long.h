/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 02:40:00 by saandria          #+#    #+#             */
/*   Updated: 2024/05/31 15:46:15 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/get_next_line.h"
# include "minilibx-linux/mlx.h"
# include "minilibx-linux/mlx_int.h"
# include "printf/ft_printf.h"

typedef struct s_coord
{
	int	x;
	int	y;
}		t_coord;

typedef struct s_assets
{
	void	*coin;
	void	*exit;
	void	*wall;
	void	*ground;
	void	*player;
}			t_assets;

typedef struct s_window
{
	void		*mlx;
	void		*win_mlx;
	t_assets	img;
	char		**maps;
	char		**tmp;
	int			score;
	int			move;
	int			w;
	int			h;
}				t_window;

char	**ft_map(char *argv[]);
char	**ft_split(char const *s, char c);
char	**get_map(char *m);
int		check_error_map(char *map);
void	*create_window(char **map, t_window w, void *mlx);
void	free_split(char **spl);
void	draw_map(char **maps, t_window *w);
char	*read_map(int fd);
void	init_assets(t_window *w);
void	free_assets(t_window *w);
int		close_window(t_window *w);
void	check_map_char(char c, t_window *w, int x, int y);
int		handle_key(int keycode, t_window *w);
int		get_player_y(char **maps);
int		get_player_x(char **maps);
void	move_right(t_window *w);
void	move_left(t_window *w);
void	move_down(t_window *w);
void	move_up(t_window *w);
void	check_char_before_move(t_window *w, char c);
int		there_is_coin(t_window *w);
void	check_error(char **map);
int		same_line(char **map);
int		is_sur_walls(char **map);
int		is_rectangular(char **map);
void	ft_error(int n);
void	fill_way(t_window *w, int y, int x);
void	flood_fill(t_window *w);
void	increase_move(t_window *w);

#endif