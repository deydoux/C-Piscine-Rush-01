/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_visible.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:54:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 11:18:30 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_visible_line(int grille[4][4], int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 0;
	high = 1;
	while (j < 4)
	{       
		if (grille[i][j] >= high)
		{
			result++;
			high = grille[i][j];
		}
		j++;
	}
	return (result);
}

int	nb_visible_invert_line(int grille[4][4], int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grille[i][j] >= high)
		{
			result++;
			high = grille[i][j];
		}
		j--;
	}
	return (result);
}

int	nb_visible_column(int grille[4][4], int i)
{
	int     result;
	int     high;
	int     j;

	result = 0;
	j = 0;
	high = 1;
	while (j < 4)
	{
		if (grille[j][i] >= high)
		{
			result++;
			high = grille[j][i];
		}
		j++;
	}
	return (result);
}

int	nb_visible_invert_column(int grille[4][4], int i)
{
	int	result;
	int	high;
	int	j;

	result = 0;
	j = 3;
	high = 1;
	while (j >= 0)
	{
		if (grille[j][i] >= high)
		{
			result++;
			high = grille[j][i];
		}
		j--;
	}
	return (result);
}
