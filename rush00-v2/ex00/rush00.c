/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:26:58 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/05 23:30:10 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	map(int i, char a, char b, char c)
{
	int	j;

	j = 1;
	ft_putchar(a);
	while (j < i -1)
	{
		ft_putchar(b);
		j ++;
	}
	if (i > 1)
		ft_putchar(c);
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	k;

	k = 1;
	if (x > 0 && y > 0)
	{
		map(x, 'o', '-', 'o');
		while (k < y - 1)
		{
			map(x, '|', ' ', '|');
			k++;
		}
		if (y != 1)
			map(x, 'o', '-', 'o');
	}
}
