/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:10:54 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 16:59:28 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**parse_rules(char *input);
int		**init_grid(int **rules);
void	put_grid(int **grid);
int		solve(int **grid, int **rules, int position);
void	ft_free(int **array);

int	main(int argc, char **argv)
{
	int	**rules;
	int	**grid;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	rules = parse_rules(argv[1]);
	if (!rules)
	{
		write(1, "Error\n", 6);
		return (2);
	}
	grid = init_grid(rules);
	if (!solve(grid, rules, 0))
		write(1, "Error\n", 6);
	put_grid(grid);
	ft_free(grid);
	ft_free(rules);
	return (0);
}
