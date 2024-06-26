/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:33:51 by jleon-la          #+#    #+#             */
/*   Updated: 2024/06/26 18:36:04 by jleon-la         ###   ########.fr       */
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

#define WIDTH 1000
#define HEIGHT 1000

#define YELLOW_RGB 0xFFFF00
#define PURPLE_RGB 0x800080
#define SKY_BLUE_RGB 0x87CEEB
#define SEA_GREEN_RGB 0x2E8B57
#define SAND_RGB 0xC2B280
#define CORAL_PINK_RGB 0xFF7F50
#define OPOSITE_CORAL 0x0080AF
#define BIKINI_PURPLE 0xFF4DFA
#define NAVY_BLUE_RGB 0x000080
#define WHITE 0xFFFFFF
#define BLACK 0x000000


typedef struct s_complex
{
    double  x;
    double  y;
}              t_complex;

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
    double  escaped_value;
    int     iterations_definition;
}              t_fractal;

// void my_pixel_put(int x, int y, t_img *img, double *color)
void        fractal_init(t_fractal *fractal);
void        data_init(t_fractal *fractal);
void        mess(int fd, char *str);
double      map(double unscaled_num, double new_min, double new_max, double old_min, double old_max);
t_complex   sum_complex(t_complex z1, t_complex z2);
t_complex   sqare_complex(t_complex z);
void        fractal_render(t_fractal *fractal);
// void        handle_pixel(int x, int y, t_fractal *fractal);

#endif