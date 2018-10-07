/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idurgan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 16:09:15 by idurgan           #+#    #+#             */
/*   Updated: 2018/10/07 11:01:05 by eurras-i         ###   ########.fr       */
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

char	*parse_console_output()
{
	char	buff[BUFFER_SIZE];
	int		cond;
	char	*result;

	result = "";
	cond = 0;
	while ((cond = read(0, buff, BUFFER_SIZE)))
	{
		result = ft_strcat(result, buff);
	}
	return (result);
}

int		main(void)
{
	t_rush_info	t;
	char		*parsed_output;

	parsed_output = "";
	t.rush_number = 3;
	parsed_output = parse_console_output();
	t.rush_string = parsed_output;
	t.rows_count = count_rows(t.rush_string);
	t.columns_count = count_columns(t.rush_string);
	printf("%d", ft_strcmp(parsed_output, generate_rush_output(t)));
	return (0);
}
