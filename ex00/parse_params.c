/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:42:46 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 11:06:08 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**parse_params(char *input)
{
	int	i;
	int	**params;

	params = malloc(4);
	params[0] = malloc(4);
	params[1] = malloc(4);
	params[2] = malloc(4);
	params[3] = malloc(4);
	i = 0;
	while (input[i])
	{
		if (i >= 31)
			return (NULL);
		if (i % 2 == 0)
		{
			if (!('1' <= input[i] && input[i] <= '4'))
				return (NULL);
			params[i / 8][i / 2 % 4] = input[i] - '0';
		}
		else if (input[i] != ' ')
			return (NULL);
		i++;
	}
	return (params);
}
