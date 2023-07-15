/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:10:54 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 15:51:05 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	put_error(int code);
int	**parse_params(char *input);
int	**init_grid(int **params);
void	put_grid(int **grid);
int	backtracking(int **grid, int **params, int position);

int	main(int argc, char **argv)
{
	int	**params;
	int	**grid;

	if (argc != 2)
		return (put_error(2));
	params = parse_params(argv[1]);
	if (!params)
		return (put_error(2));
	grid = init_grid(params);
	backtracking(grid, params, 0);
	put_grid(grid);
}
