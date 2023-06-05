/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migupere <migupere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:04:45 by migupere          #+#    #+#             */
/*   Updated: 2023/06/05 17:05:26 by migupere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *buffer, int target)
{
	int	i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i])
	{
		if ((unsigned char)buffer[i] == (unsigned char)target)
			return (&buffer[i]);
		i++;
	}
	if ((unsigned char )buffer[i] == (unsigned char)target)
		return (&buffer[i]);
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	i = ft_strlen(s1);
	j = 0;
	join = (char *)malloc(sizeof(s1[0]) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == NULL)
		return (NULL);
	while (s1[j])
	{
		join[j] = s1[j];
		j++;
	}
	j = -1;
	while (s2[++j])
		join[i + j] = s2[j];
	free(s1);
	join[i + j] = '\0';
	return (join);
}
