/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:39:46 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 16:25:12 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	line(int **grid, int i, int k);
int	column(int **grid, int j, int k);
int	is_valid_grid(int **grid, int **params);

int	backtracking(int **grid, int **params, int position)
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
		return (backtracking(grid, params, position + 1));
	while (k <= 4)
	{
		if (column(grid, j, k) == 0 && line(grid, i, k) == 0)
		{
			grid[i][j] = k;
			if (backtracking(grid, params, position + 1) == 1 && is_valid_grid(grid, params))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
