/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:49:36 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/07 19:16:45 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int main(void)
// {
// 	int a = 23;
// 	int b = 7;

// 	int *ptra = &a;
// 	int *ptrb = &b;
// 	ft_ultimate_div_mod(ptra, ptrb);
// 	printf("div = %d, mod = %d", a, b);	
// }