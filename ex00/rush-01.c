/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:10:54 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 13:52:12 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	put_error(int code);
int	**parse_params(char *input);

int	main(int argc, char **argv)
{
	int	**params;

	if (argc != 2)
		return (put_error(2));
	params = parse_params(argv[1]);
	if (!params)
		return (put_error(2));
}
