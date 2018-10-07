/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idurgan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 12:46:23 by idurgan           #+#    #+#             */
/*   Updated: 2018/10/07 12:49:24 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_rush_header.h"

char	*terminate_symbol(char c)
{
	char	*res;
	res = malloc(2);
	res[0] = c;
	res[1] = '\0';
	return (res);
}

char	*generate_line(int x, char left, char mid, char right)
{
	int		i;
	char	*res;
	char	nl;


	res = "";
	nl = '\n';
	i = 2;
	res = ft_strcat(res, terminate_symbol(left));
	while (i < x)
	{
		res = ft_strcat(res, terminate_symbol(mid));
		i++;
	}
	if (x > 1)
		res = ft_strcat(res, terminate_symbol(right));
	res = ft_strcat(res, terminate_symbol(nl));
	return (res);
}

char	*rush0x(int x, int y, char *symbols)
{
	int		a;
	char	*top;
	char	*bottom;
	char	*result;

	a = 0;
	if ((x <= 0) || (y <= 0))
		return (NULL);
	result = "";
	result = ft_strcat(result, generate_line(x, symbols[0], symbols[1], symbols[2]));
	while (y > 2)
	{
		result = ft_strcat(result, generate_line(x, symbols[3], ' ', symbols[4]));
		y--;
	}
	if (y > 1)
		result = ft_strcat(result, generate_line(x, symbols[5], symbols[6], symbols[7]));
	return (result);
}

char	*generate_rush_output(t_rush_info rush_info)
{
	char *symbols;
	char *result;

	if (rush_info.rush_number == 0)
		symbols = "o-o||o-o";
	if (rush_info.rush_number == 1)
		symbols = "/*\\**\\*/";
	if (rush_info.rush_number == 2)
		symbols = "ABABBCBC";
	if (rush_info.rush_number == 3)
		symbols = "ABCBBABC";
	if (rush_info.rush_number == 4)
		symbols = "ABCBBCBA";
	result = rush0x(rush_info.columns_count, rush_info.rows_count,
				symbols);
	return (result);
}
