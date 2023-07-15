/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_visible.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:54:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 16:36:26 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_visible_row_left(int **grid, int i)
{
	int	nb;
	int	high;
	int	j;

	nb = 0;
	j = 0;
	high = 1;
	while (j < 4)
	{
		if (grid[i][j] >= high)
		{
			nb++;
			high = grid[i][j];
		}
		j++;
	}
	return (nb);
}

int	nb_visible_row_right(int **grid, int i)
{
	int	nb;
	int	high;
	int	j;

	nb = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grid[i][j] >= high)
		{
			nb++;
			high = grid[i][j];
		}
		j--;
	}
	return (nb);
}

int	nb_visible_col_up(int **grid, int i)
{
	int	nb;
	int	high;
	int	j;

	nb = 0;
	j = 0;
	high = 0;
	while (j < 4)
	{
		if (grid[j][i] > high)
		{
			nb++;
			high = grid[j][i];
		}
		j++;
	}
	return (nb);
}

int	nb_visible_col_down(int **grid, int i)
{
	int	nb;
	int	high;
	int	j;

	nb = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grid[j][i] >= high)
		{
			nb++;
			high = grid[j][i];
		}
		j--;
	}
	return (nb);
}

int	nb_visible(int **grid, int position)
{
	if (position / 4 == 0)
		return (nb_visible_col_up(grid, position % 4));
	else if (position / 4 == 1)
		return (nb_visible_col_down(grid, position % 4));
	else if (position / 4 == 2)
		return (nb_visible_row_left(grid, position % 4));
	else
		return (nb_visible_row_right(grid, position % 4));
}
