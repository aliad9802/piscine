/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:09:36 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/05 17:00:06 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

int	check_position(int x, int y, int px, int py)
{
	if (x == 0 || y == 0)
		return (0);	
	else if (x == 1 && y == 1)
		ft_putchar('/');
	else if ((x == 1 && py == y)|| (y == 1 && px == x))
		ft_putchar('\\');
	else if ((px == 1 && py == 1) || (px == x && py == y))
		ft_putchar('/');
	else if ((px == x && py == 1) || (px == 1 && py == y))
		ft_putchar('\\');
	else if (px == 1 || py == 1 || py == y || px == x)
		ft_putchar('*');
	else 
		ft_putchar(' ');
	return (0);
}

void	rush(int x, int y)
{
	int	px;
	int	py;

	px = 1;
	py = 1;
	while (py <= y)
	{
		px = 1;
		while (px <= x)
		{
			check_position(x, y, px, py);
			px++;
		}
		ft_putchar(10);
		py++;
	}
}

