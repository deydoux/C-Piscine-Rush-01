/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:19:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 14:08:39 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	line(int **grid, int i, int k)
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

int	column(int **grid, int j, int k)
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

int	isvalid(int **grid)
{
	int	k;
	int	i;

	k = 1;
	i = 0;
	while (i < 4)
	{
		while (k <= 4)
		{
			if (line(grid, i, k) == 0)
				return (0);
			if (column(grid, i, k) == 0)
				return (0);
			k++;
		}
		k = 1;
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	int	tab[4][4] =  {{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
// 	printf("%d",nb_visible_line(tab,3));
// 	return (0);
// }
