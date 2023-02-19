/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabou-da <aabou-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:28:31 by aabou-da          #+#    #+#             */
/*   Updated: 2023/02/12 23:12:31 by aabou-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);

int	**create_square(int n)
{
	int	**grill;
	int	i;
	int	j;

	j = 0;
	i = 0;
	grill = malloc(sizeof(int) * 16);
	grill[0] = malloc(sizeof(int) * 4);
	grill[1] = malloc(sizeof(int) * 4);
	grill[2] = malloc(sizeof(int) * 4);
	grill[3] = malloc(sizeof(int) * 4);
	while (i < 4)
	{
		while (j < 4)
		{
			grill[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grill);
}

int	*read_str_ret_input(char *str)
{
	int	i;
	int	*input;
	int	j;
	int	cpt;

	cpt = get_input_size(str);
	j = 0;
	i = 0;
	input = malloc(sizeof(int) * cpt);
	while (str[i++])
	{
		if (str[i] >= '0' && str[i] <= '9')
			input[j++] = str[i] - 48;
	}
	return (input);
}

int	get_input_size(char *str)
{
	int	i;
	int	cpt;

	i = 0;
	cpt = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			cpt++;
		i++;
	}
	return (cpt);
}

int	**create_grill_input(int n, int *input_string)
{
	int	**grill_input;
	int	i;
	int	j;
	int c;

	j = 0;
	i = 0;
	c = 0;
	grill_input = malloc(sizeof(int) * (n / 4));
	grill_input[0] = malloc(sizeof(int) * (n / 4));
	grill_input[1] = malloc(sizeof(int) * (n / 4));
	grill_input[2] = malloc(sizeof(int) * (n / 4));
	grill_input[3] = malloc(sizeof(int) * (n / 4));
	while (i < (n / 4))
	{
		while (j < (n / 4))
		{
			grill_input[i][j] = input_string[c++];
			j++;
		}
		i++;
	}
	return (grill_input);
}

