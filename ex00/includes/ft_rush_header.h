/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_header.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurras-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 04:18:14 by eurras-i          #+#    #+#             */
/*   Updated: 2018/10/07 09:45:00 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_HEADER_H
# define FT_RUSH_HEADER_H
# define BUFFER_SIZE 1000
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_rush_info
{
	char	*rush_string;
	int		columns_count;
	int		rows_count;
	int		rush_number;
}				t_rush_info;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*ft_strcat(char *str1, char *str2);
int				ft_strcmp(char *str1, char *str2);
char			*generate_rush_output(t_rush_info rush_info);
char			*parse_console_output();

#endif
