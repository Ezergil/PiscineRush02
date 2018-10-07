/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurras-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 05:12:29 by eurras-i          #+#    #+#             */
/*   Updated: 2018/10/07 23:05:54 by eurras-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_rush_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int		ft_strlen(char *str1)
{
	unsigned int i;

	i = 0;
	while (str1[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *str1, char *str2)
{
	char			*result;
	int				len1;
	int				len2;
	unsigned int	i;

	i = 0;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = malloc(len1 + len2 + 1);
	while (str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	while (str2[i - len1])
	{
		result[i] = str2[i - len1];
		i++;
	}
	result[i] = '\0';
	return (result);
}
