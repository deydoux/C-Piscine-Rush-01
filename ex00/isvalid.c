/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:19:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 15:35:59 by deydoux          ###   ########.fr       */
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
