/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:54:57 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/06 11:13:47 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main(void)
// {
// 	int a = 8;
// 	int b = 10;

// 	int *ptra = &a;
// 	int *ptrb = &b;
// 	printf("a = %d, b = %d\n", a, b);
// 	ft_swap(ptra, ptrb);
// 	printf("a = %d, b = %d\n", a, b);
// }