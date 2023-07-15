/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:46 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 17:18:38 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	nb_visible(int **grid, int position);

int	row_contains(int **grid, int i, int k)
{
	int	j;

	j = 0;
	while (grid[i][j] != '\0')
	{
		if (grid[i][j] == k)
			return (1);
		j++;
	}
	return (0);
}

int	column_contains(int **grid, int j, int k)
{
	int	i;

	i = 0;
	while (grid[i][j] != '\0')
	{
		if (grid[i][j] == k)
			return (1);
		i++;
	}
	return (0);
}

int	is_valid_grid(int **grid, int **rules)
{
	int	position;

	position = 0;
	while (position < 16)
	{
		if (nb_visible(grid, position) != rules[position / 4][position % 4])
			return (0);
		position++;
	}
	return (1);
}

int	solve(int **grid, int **rules, int position)
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
		return (solve(grid, rules, position + 1));
	while (k <= 4)
	{
		if (!column_contains(grid, j, k) && !row_contains(grid, i, k))
		{
			grid[i][j] = k;
			if (solve(grid, rules, position + 1)
				&& is_valid_grid(grid, rules))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
