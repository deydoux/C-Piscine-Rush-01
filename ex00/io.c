/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:00:46 by bstauss           #+#    #+#             */
/*   Updated: 2023/07/15 16:59:06 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**parse_rules(char *input)
{
	int	i;
	int	**rules;

	rules = malloc(4);
	rules[0] = malloc(4);
	rules[1] = malloc(4);
	rules[2] = malloc(4);
	rules[3] = malloc(4);
	i = 0;
	while (input[i])
	{
		if (i >= 31)
			return (NULL);
		if (i % 2 == 0)
		{
			if (!('1' <= input[i] && input[i] <= '4'))
				return (NULL);
			rules[i / 8][i / 2 % 4] = input[i] - '0';
		}
		else if (input[i] != ' ')
			return (NULL);
		i++;
	}
	return (rules);
}

void	put_grid(int **grid)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j++] + '0';
			write(1, &c, 1);
			if (j != 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
