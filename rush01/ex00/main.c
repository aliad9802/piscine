/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:22:01 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/12 23:12:33 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		**create_square(int n);
void	ft_putchar(char c);
int	sight_rangel(int *row, int nb);
int	*ft_rev_int_tab(int *tab, int size);

int main()
{
	// int **grill;
	// grill = create_square(4);
	int hello[4] = {1,3,4,2};
	printf("%d",sight_rangel(ft_rev_int_tab(hello, 4), 4));

	return (0);
}