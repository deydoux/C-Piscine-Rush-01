/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:41:06 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 14:16:56 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	set_end_line(int **grid, int i, int j)
{
	if (i == 0)
		grid[0][j] = 4;
	else if (i == 1)
		grid[3][j] = 4;
	else if (i == 2)
		grid[j][0] = 4;
	else
		grid[j][3] = 4;
}

void	fill_line(int **grid, int i, int j)
{
	if (i == 0)
	{
		i = -1;
		while (++i < 4)
			grid[i][j] = i + 1;
	}
	else if (i == 1)
	{
		i = -1;
		while (++i < 4)
			grid[3 - i][j] = i + 1;
	}
	else if (i == 2)
	{
		i = -1;
		while (++i < 4)
			grid[j][i] = i + 1;
	}
	else
	{
		i = -1;
		while (++i < 4)
			grid[j][3 - i] = i + 1;
	}
}

int	**init_grid(int **params)
{
	int	i;
	int	j;
	int	**grid;

	grid = malloc(4);
	grid[0] = malloc(4);
	grid[1] = malloc(4);
	grid[2] = malloc(4);
	grid[3] = malloc(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		if (params[i][j] == 1)
			set_end_line(grid, i, j);
		else if (params[i][j] == 4)
			fill_line(grid, i, j);
		i++;
	}
	return (grid);
}
