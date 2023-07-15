/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:10:54 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 10:49:50 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	throw_error(int	code);
int	**parse_params(char *input);

int	main(int argc, char **argv)
{
	int	**params;

	if (argc != 2)
		return (throw_error(1));
	params = parse_params(argv[1]);
	if (!params)
		return (throw_error(1));
}
