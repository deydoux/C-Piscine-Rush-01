/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_visible.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:54:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 14:11:35 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_visible_row_left(int **grid, int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 0;
	high = 1;
	while (j < 4)
	{
		if (grid[i][j] >= high)
		{
			result++;
			high = grid[i][j];
		}
		j++;
	}
	return (result);
}

int	nb_visible_row_right(int **grid, int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grid[i][j] >= high)
		{
			result++;
			high = grid[i][j];
		}
		j--;
	}
	return (result);
}

int	nb_visible_col_up(int **grid, int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 0;
	high = 1;
	while (j < 4)
	{
		if (grid[j][i] >= high)
		{
			result++;
			high = grid[j][i];
		}
		j++;
	}
	return (result);
}

int	nb_visible_col_down(int **grid, int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grid[j][i] >= high)
		{
			result++;
			high = grid[j][i];
		}
		j--;
	}
	return (result);
}

int	nb_visible(int **grid, int i)
{
	if (i / 4 == 0)
		return (nb_visible_col_up(grid, i % 4));
	else if (i / 4 == 1)
		return (nb_visible_col_down(grid, i % 4));
	else if (i / 4 == 2)
		return (nb_visible_row_left(grid, i % 4));
	else
		return (nb_visible_row_right(grid, i % 4));
}
