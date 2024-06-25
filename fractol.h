/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:33:51 by jleon-la          #+#    #+#             */
/*   Updated: 2024/06/25 16:56:15 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

#  include <stdio.h>
#  include <stdlib.h>
#  include <unistd.h>
#  include <math.h>
#  include "minilibx-linux/mlx.h"
#  include "libft/libft.h"

#define ERROR_MESSAGE "Please enter \n\t"./fractol mandelbrot\" or \n\t"./fractol julia <value_1> <value_2>\""

#define WIDTH 800
#define HEIGHT 800

typedef struct s_img
{
    void    *img_ptr;
    void    *pixels_ptr;
    int     bpp;
    int     endian;
    int     line_len;
}              t_img;

typedef struct s_fractal
{
    char    *name;
    void    *mlx_connection;
    void    *mlx_window;
    t_img   img;
    
}              t_fractal;

void    fractal_init(t_fractal *fractal);
void    mess(int fd, char *str);

#endif