/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_comparator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurras-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:12:31 by eurras-i          #+#    #+#             */
/*   Updated: 2018/10/07 23:06:42 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_rush_header.h"

void	print_rush_number_with_dimensions_is_needed(int *has_rush_matches,
		int rush_number, int columns, int rows)
{
	char *res_str;
	char number;
	char columns_n;
	char rows_n;

	res_str = "";
	number = rush_number + '0';
	columns_n = columns + '0';
	rows_n = rows + '0';
	if (*has_rush_matches)
	{
		ft_putstr(" || ");
	}
	*has_rush_matches = 1;
	res_str = ft_strcat(res_str, "[rush-0");
	res_str = ft_strcat(res_str, terminate_symbol(number));
	res_str = ft_strcat(res_str, "] [");
	res_str = ft_strcat(res_str, terminate_symbol(columns_n));
	res_str = ft_strcat(res_str, "] [");
	res_str = ft_strcat(res_str, terminate_symbol(rows_n));
	res_str = ft_strcat(res_str, "]");
	ft_putstr(res_str);
}

void	check_for_valid_rush(t_rush_info ri)
{
	int		has_rush_matches;

	has_rush_matches = 0;
	ri.rush_number = 0;
	if (ft_strcmp(generate_rush_output(ri), ri.rush_string) == 0)
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 0,
				ri.columns_count, ri.rows_count);
	ri.rush_number = 1;
	if (ft_strcmp(generate_rush_output(ri), ri.rush_string) == 0)
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 1,
				ri.columns_count, ri.rows_count);
	ri.rush_number = 2;
	if (ft_strcmp(generate_rush_output(ri), ri.rush_string) == 0)
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 2,
				ri.columns_count, ri.rows_count);
	ri.rush_number = 3;
	if (ft_strcmp(generate_rush_output(ri), ri.rush_string) == 0)
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 3,
				ri.columns_count, ri.rows_count);
	ri.rush_number = 4;
	if (ft_strcmp(generate_rush_output(ri), ri.rush_string) == 0)
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 4,
				ri.columns_count, ri.rows_count);
	if (!has_rush_matches)
		ft_putstr("aucune");
}
