int	ft_check_c1(int *row, int nb, int k)
{
	int i;

	i = 0;
	while (i < nb)
	{
		if (row[i] == k)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_c2(int *row, int **grill_input, int k)
{
	int	i;
	i = 0;

}

int	sight_rangel(int *row, int nb)
{
	int	cpt;
	int	i;
	int	cmv;

	cpt = 1;
	i = 1;
	cmv = row[i];
	while (i <= nb)
	{
		if (row[i] >= cmv)
		{
			cmv = row[i];
			cpt++;
		}
		i++;
	}
	return (cpt);
}
