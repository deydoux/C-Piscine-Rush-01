/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:40:07 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/15 09:40:15 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	throw_error(int	code)
{
	if (code == 1)
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
