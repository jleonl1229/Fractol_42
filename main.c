/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:16:12 by jleon-la          #+#    #+#             */
/*   Updated: 2024/06/25 16:52:46 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int ac, char **av)
{
    t_fractal   fractal;
    if ((ac == 2 && !ft_strncmp(av[1], "mandelbrot", 10))
        || (ac == 4 && !ft_strncmp(av[1], "julia", 5)))
    {
        mess(1, "Valid input\n");
        fractal.name = av[1];
        fractal_init(&fractal);
        // fractal_render(&fractal);
        mlx_loop(fractal.mlx_connection);
    }
    else
        return (mess(2, "Invalid input\n"), 1);
    return (0);
}