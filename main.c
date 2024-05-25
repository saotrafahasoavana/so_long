/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 02:42:50 by saandria          #+#    #+#             */
/*   Updated: 2024/05/25 10:39:02 by saandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	char	**maps;
	t_window	w;

	w.mlx = mlx_init();
	maps = ft_map(argc, argv);
	w.win_mlx = create_window(maps, w, w.mlx);
	init_assets(&w);
	draw_map(maps, &w);
	free_split(maps);
	free_assets(&w);
	mlx_key_hook(w.win_mlx, handle_key, &w);
	mlx_hook(w.win_mlx, 17, 0, close_window, &w);
	mlx_loop(w.mlx);
}
