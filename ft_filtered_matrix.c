char	**ft_filtered_columns(char **matrix, char **filtered_matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (matrix[x][y])
	{
		if ((matrix[x][y] == matrix[x][y + 1] && y >= 0 && y <= 3))
			y++;
		else
			filtered_matrix[x][y] = filtered_matrix[x][y];
	}
	return (filtered_matrix);
}

char	**ft_validate_rows(char **matrix, char **filtered_matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (matrix[x][y])
	{
		if ((matrix[x][y] == matrix[x + 1][y] && x >= 0 && x <= 3))
		{
			x++;
		}
		else
		{
			filtered_matrix[x][y] = matrix[x][y];
		}
		y++;
	}
	return (filtered_matrix);
}

char	**ft_filtered_matrix(char **matrix)
{
	return (matrix);
}

int	main(void)
{
	ft_generate_and_filter();
	return (0);
}
