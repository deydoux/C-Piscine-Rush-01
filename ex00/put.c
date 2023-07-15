/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:00:46 by bstauss           #+#    #+#             */
/*   Updated: 2023/07/15 13:50:32 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	put_error(int code)
{
	if (code == 2)
	{
		ft_putstr("Error: Invalid format, ");
		ft_putstr("you must match the following example.\n");
		ft_putstr("./rush-01 \"col1up col2up col3up col4up col1down col2down ");
		ft_putstr("col3down col4down row1left row2left row3left row4left ");
		ft_putstr("row1right row2right row3right row4right\"");
	}
	ft_putstr("\n");
	return (code);
}


void	put_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			write(1, &grid[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
}
