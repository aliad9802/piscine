/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 08:45:28 by alabou-d          #+#    #+#             */
/*   Updated: 2023/02/06 10:43:32 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	a;
	int	b;

	a = 78;
	b = 80;
	if (n < 0)
		write(1, &a, 1);
	else
		write(1, &b, 1);
}

// int main(void)
// {
// 	ft_is_negative(56);

// 	return (0);
// }