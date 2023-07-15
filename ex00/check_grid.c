/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:41:11 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 16:24:40 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_visible(int **grid, int i);

int	is_valid_grid(int **grid, int **params)
{
	int	position;

	position = 0;
	while (position < 16)
	{
		if (nb_visible(grid, position) != params[position / 4][position % 4])
			return (0);
		position++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	**grid;
// 	int	**params;

// 	grid = parse_params("1 2 3 4 2 3 4 1 3 4 1 2 4 1 2 3");
// 	params = parse_params("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
// 	printf("%d", is_valid_grid(grid, params));
// }
