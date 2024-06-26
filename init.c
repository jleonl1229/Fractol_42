/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:33:58 by jleon-la          #+#    #+#             */
/*   Updated: 2024/06/26 17:38:05 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void    malloc_error(void)
{
    mess(2, "Error\n");
    exit(1);
}

void    data_init(t_fractal *fractal)
{
    fractal->escaped_value = 4;
    fractal->iterations_definition = 42;
}

void    fractal_init(t_fractal *fractal)
{
    fractal->mlx_connection = mlx_init();//Starts the connection
    if (NULL == fractal->mlx_connection)
        malloc_error();
    fractal->mlx_window = mlx_new_window(fractal->mlx_connection, WIDTH, HEIGHT, fractal->name);
    if (NULL == fractal->mlx_window)
    {
        mlx_destroy_display(fractal->mlx_connection);
        free(fractal->mlx_connection);
        malloc_error();
    }
    fractal->img.img_ptr = mlx_new_image(fractal->mlx_connection, WIDTH, HEIGHT);
    if (NULL == fractal->img.img_ptr)
    {
        mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
        mlx_destroy_display(fractal->mlx_connection);
        free(fractal->mlx_connection);
        malloc_error();
    }
    fractal->img.pixels_ptr = mlx_get_data_addr(fractal->img.img_ptr, &fractal->img.bpp, &fractal->img.line_len, &fractal->img.endian);
    data_init(fractal);
}