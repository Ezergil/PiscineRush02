/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_comparator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurras-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 11:12:31 by eurras-i          #+#    #+#             */
/*   Updated: 2018/10/07 13:05:41 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush_header.h"

void	check_for_valid_rush(t_rush_info ri)
{
	char	*rush0_correct_string;
	char	*rush1_correct_string;
	char	*rush2_correct_string;
	char	*rush3_correct_string;
	char	*rush4_correct_string;
	int		has_rush_matches;

	ri.rush_number = 0;
	rush0_correct_string = generate_rush_output(ri);
	if (ft_strcmp(rush0_correct_string, ri.rush_string) == 0)
	{
		has_rush_matches = 1;
		print_rush_number_with_dimensions_is_needed(&has_rush_matches, 0,
				ri.columns_count, ri_rows_count, (ft_strcmp(rush)));
	}
}

void	print_rush_number_with_dimensions_is_needed(int *has_rush_matches,
		int rush_number, int columns, int rows, int is_needed)
{
	char *result_string;
	char number;
	char columns_n;
	char rows_n;

	result_string = "";
	if (is_needed)
	{
		number = rush_number + '0';
		columns_n = columns + '0';
		rows_n = rows + '0';
		result_string = ft_strcat(result_string, "[rush-0");
		result_string = ft_strcat(result_string, terminate_symbol(number));
		result_string = ft_strcat(result_string, "] [");
		result_string = ft_strcat(result_string, terminate_symbol(columns_n));
		result_string = ft_strcat(result_string, "] [");
		result_string = ft_strcat(result_string, terminate_symbol(rows_n));
		result_string = ft_strcat(result_string, "]\n");
	}
	if (!has_rush_matches)
	{
		ft_putstr("aucune");
	}
}
