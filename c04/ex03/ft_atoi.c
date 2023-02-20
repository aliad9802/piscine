/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:58:09 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/20 14:47:45 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == ' ')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10;
		res += str[i] - 48;
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%d", ft_atoi(av[1]));
// 	return (0);
// }