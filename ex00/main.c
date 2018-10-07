/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idurgan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:09:15 by idurgan           #+#    #+#             */
/*   Updated: 2018/10/07 23:25:18 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_rush_header.h"

int		count_rows(char *rush_string)
{
	int i;
	int rows_count;

	rows_count = 0;
	i = 0;
	while (rush_string[i] != '\0')
	{
		if (rush_string[i] == '\n')
			rows_count++;
		i++;
	}
	return (rows_count);
}

int		count_columns(char *rush_string)
{
	int i;

	i = 0;
	while (rush_string[i] != '\n')
	{
		i++;
	}
	return (i);
}

char	*parse_console_output(void)
{
	char	buff[BUFFER_SIZE];
	int		cond;
	int		has_input;
	char	*result;

	result = "";
	cond = 0;
	while ((cond = read(0, buff, BUFFER_SIZE)))
	{
		has_input = 1;
		result = ft_strcat(result, buff);
	}
	return (result);
}

int		main(void)
{
	t_rush_info	t;
	char		*parsed_output;
	int			success_count;

	success_count = 0;
	parsed_output = "";
	parsed_output = parse_console_output();
	if (!parsed_output)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	t.rush_string = parsed_output;
	t.rows_count = count_rows(t.rush_string);
	t.columns_count = count_columns(t.rush_string);
	check_for_valid_rush(t);
	ft_putchar('\n');
	return (0);
}
