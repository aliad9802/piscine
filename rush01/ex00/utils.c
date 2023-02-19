/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:07:03 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/12 23:12:32 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *copy_tab(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_print_square(int **grill, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(grill[i][j] + 48);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

int	*ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;
	int	*new;

	new = copy_tab(tab, size);
	i = 0;
	while (i < size / 2)
	{
		swap = new[i];
		new[i] = new[size - 1 - i];
		new[size - 1 - i] = swap;
		i++;
	}
	return (new);
}

int *copy_tab(int *tab, int size)
{
	int	i;
	int	*new;
	
	new = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		new[i] = tab[i];
		i++;
	}
	return (new);
}