/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:46 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 15:26:46 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	line(int **grid, int i, int k);
int	column(int **grid, int j, int k);

int backtracking(int **grid, int position)
{
	int	i;
	int	j;
	int	k;

	k = 1;
	if (position == 16)
		return (1);

	i = position / 4;
	j = position % 4;

	if (grid[i][j] != 0)
		return (backtracking(grid, position + 1));

	while (k <= 9)
	{
		if (column(grid, j, k) == 0 && line(grid, i, k) == 0)
		{
			grid[i][j] = k;
			if (backtracking(grid, position + 1) == 1)
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}

void	put_grid(int **grid)
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j++] + '0';
			write(1, &c, 1);
			if (j != 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	int	**grid;
	int	i = 0;
	int	j = 0;

	grid = malloc(4);
	grid[0] = malloc(4);
	grid[1] = malloc(4);
	grid[2] = malloc(4);
	grid[3] = malloc(4);
	while (i < 4)
	{
		while (j < 4)
		{
			j++;
		}
		i++;
	}
	backtracking(grid, 0);
	put_grid(grid);
}
