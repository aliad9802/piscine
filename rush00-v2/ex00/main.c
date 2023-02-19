/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:32:11 by alabou-d          #+#    #+#             */
/*   Updated: 2023/02/05 23:34:07 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);

int	str_to_int(char *str)
{
	int	i;
	int	total;
	int	mul;

	total = 0;
	i = 0;
	mul = 1;
	while (str[i])
	{
		if (str[i] == '-')
			mul = -mul;
		else if (str[i] >= 48 && str[i] <= 57)
		{
			total *= 10;
			total += str[i] - 48;
		}
		else
			return (0);
		i ++;
	}
	return (total * mul);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		rush(5, 5);
		return (0);
	}
	if (str_to_int(argv[1]) <= 0 || str_to_int(argv[2]) <= 0)
		return (0);
	rush(str_to_int(argv[1]), str_to_int(argv[2]));
	return (0);
}
