/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:02:35 by biaroun           #+#    #+#             */
/*   Updated: 2023/02/15 16:50:29 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i != ac)
	{
		j = 0;
		while (av[i][j])
			write(1, &av[i][j++], 1);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
