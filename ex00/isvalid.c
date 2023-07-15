/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyven-dr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:19:08 by pyven-dr          #+#    #+#             */
/*   Updated: 2023/07/15 10:18:04 by pyven-dr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	line(int grille[4][4], int i, int k)
{
	int	j;

	j = 0;
	while (grille[i][j] != '\0')
	{
		if (grille[i][j] == k)
			return (1);
		j++;
	}
	return (0);
}

int	column(int grille[4][4], int j, int k)
{
	int	i;

	i = 0;
	while (grille[i][j] != '\0')
	{
		if (grille[i][j] == k)
			return (1);
		i++;
	}
	return (0);
}

int	isvalid(int grille[4][4])
{
	int	k;
	int	i;

	k = 1;
	i = 0;
	while (i < 4)
	{
		while (k <= 4)
		{
			if (line(grille, i, k) == 0)
				return (0);
			if (column(grille, i, k) == 0)
				return (0);
			k++;
		}
		k = 1;
		i++;
	}
	return (1);
}

int	main(void)
{
	#include <stdio.h>
	int	tab[4][4] =  {{1,2,3,4},{2,3,4,1},{3,4,1,2},{4,1,2,3}};
	printf("%d",isvalid(tab));
	return (0);
}
